#!/usr/bin/python

import sys
from PySide import QtCore, QtGui

from SocketServer import ThreadingMixIn
from SimpleXMLRPCServer import SimpleXMLRPCServer, SimpleXMLRPCRequestHandler
from datetime import datetime

from UI import images_rc
from Toolkit import CartoonServer
import Translations


class ServerTray (QtCore.QObject):

	def __init__ (self, parent = None):
		QtCore.QObject.__init__ (self, parent)

		self.quitact = QtGui.QAction (self.tr ("&Quit"), self, triggered = QtGui.qApp.quit)

		self.trayicon = QtGui.QSystemTrayIcon (QtGui.QIcon (':/images/icon.png'))

		self.trayiconmenu = QtGui.QMenu()
		self.trayiconmenu.addAction (self.quitact)

		self.trayicon.setToolTip (self.tr("Minimize to system tray. Right click this icon and choose Quit to close."))
		self.trayicon.setContextMenu (self.trayiconmenu)

		self.trayicon.show()


class ThreadedXMLRPCServer (ThreadingMixIn, SimpleXMLRPCServer):
	pass


class RPCServerHandler (QtCore.QObject):

	finished = QtCore.Signal()

	def __init__ (self, parent = None):
		QtCore.QObject.__init__ (self, parent)

		self.server = ThreadedXMLRPCServer (("", 10207), requestHandler = SimpleXMLRPCRequestHandler)
		self.server.register_introspection_functions()
		self.server.register_instance (CartoonServer())

		self.server.allow_reuse_address = True

		QtGui.qApp.aboutToQuit.connect (self.quitworker)

	@QtCore.Slot()
	def startworker (self):
		print "Server successfully running..."
		self.server.serve_forever()

		self.finished.emit()
		print "Server exiting..."

	@QtCore.Slot()
	def quitworker (self):
		print "quit worker"
		self.server.shutdown()


if __name__ == "__main__":

	if datetime.now() > datetime (2013, 1, 1):
		sys.exit()

	app = QtGui.QApplication (sys.argv)
	app.setWindowIcon (QtGui.QIcon (':/images/icon.ico'))
	QtGui.QApplication.setQuitOnLastWindowClosed (False)

	locale = QtCore.QLocale.system().name()
	appTranslator = QtCore.QTranslator()
	if appTranslator.load (":/cartoon_" + locale):
		app.installTranslator (appTranslator)

	tray = ServerTray()

	serverworker = RPCServerHandler()
	server = QtCore.QThread()
	serverworker.moveToThread (server)

	server.started.connect (serverworker.startworker)
	serverworker.finished.connect (server.quit)
	serverworker.finished.connect (serverworker.deleteLater)
	server.finished.connect (server.deleteLater)

	QtGui.qApp.aboutToQuit.connect (serverworker.deleteLater)
	QtGui.qApp.aboutToQuit.connect (server.quit)
	QtGui.qApp.aboutToQuit.connect (server.deleteLater)

	server.start()

	app.exec_()
	QtGui.qApp.quit()
