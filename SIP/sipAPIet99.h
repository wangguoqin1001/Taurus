/*
 * Internal module API header file.
 *
 * Generated by SIP 4.13.3 on Fri Sep 14 11:19:16 2012
 */

#ifndef _et99API_H
#define _et99API_H


#include <sip.h>

/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_et_init 0
#define sipName_et_init &sipStrings_et99[0]
#define sipNameNr_et99 8
#define sipName_et99 &sipStrings_et99[8]

#define sipMalloc                   sipAPI_et99->api_malloc
#define sipFree                     sipAPI_et99->api_free
#define sipBuildResult              sipAPI_et99->api_build_result
#define sipCallMethod               sipAPI_et99->api_call_method
#define sipParseResult              sipAPI_et99->api_parse_result
#define sipParseArgs                sipAPI_et99->api_parse_args
#define sipParseKwdArgs             sipAPI_et99->api_parse_kwd_args
#define sipParsePair                sipAPI_et99->api_parse_pair
#define sipCommonDtor               sipAPI_et99->api_common_dtor
#define sipConvertFromSequenceIndex sipAPI_et99->api_convert_from_sequence_index
#define sipConvertFromVoidPtr       sipAPI_et99->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_et99->api_convert_to_void_ptr
#define sipAddException             sipAPI_et99->api_add_exception
#define sipNoFunction               sipAPI_et99->api_no_function
#define sipNoMethod                 sipAPI_et99->api_no_method
#define sipAbstractMethod           sipAPI_et99->api_abstract_method
#define sipBadClass                 sipAPI_et99->api_bad_class
#define sipBadCatcherResult         sipAPI_et99->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_et99->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_et99->api_bad_operator_arg
#define sipTrace                    sipAPI_et99->api_trace
#define sipTransferBack             sipAPI_et99->api_transfer_back
#define sipTransferTo               sipAPI_et99->api_transfer_to
#define sipTransferBreak            sipAPI_et99->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_et99->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_et99->api_wrapper_type
#define sipWrapperType_Type         sipAPI_et99->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_et99->api_voidptr_type
#define sipGetPyObject              sipAPI_et99->api_get_pyobject
#define sipGetAddress               sipAPI_et99->api_get_address
#define sipGetCppPtr                sipAPI_et99->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_et99->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_et99->api_is_py_method
#define sipCallHook                 sipAPI_et99->api_call_hook
#define sipStartThread              sipAPI_et99->api_start_thread
#define sipEndThread                sipAPI_et99->api_end_thread
#define sipConnectRx                sipAPI_et99->api_connect_rx
#define sipDisconnectRx             sipAPI_et99->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_et99->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_et99->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_et99->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_et99->api_add_type_instance
#define sipFreeSipslot              sipAPI_et99->api_free_sipslot
#define sipSameSlot                 sipAPI_et99->api_same_slot
#define sipPySlotExtend             sipAPI_et99->api_pyslot_extend
#define sipConvertRx                sipAPI_et99->api_convert_rx
#define sipAddDelayedDtor           sipAPI_et99->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_et99->api_can_convert_to_type
#define sipConvertToType            sipAPI_et99->api_convert_to_type
#define sipForceConvertToType       sipAPI_et99->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_et99->api_can_convert_to_enum
#define sipReleaseType              sipAPI_et99->api_release_type
#define sipConvertFromType          sipAPI_et99->api_convert_from_type
#define sipConvertFromNewType       sipAPI_et99->api_convert_from_new_type
#define sipConvertFromEnum          sipAPI_et99->api_convert_from_enum
#define sipGetState                 sipAPI_et99->api_get_state
#define sipLong_AsUnsignedLong      sipAPI_et99->api_long_as_unsigned_long
#define sipExportSymbol             sipAPI_et99->api_export_symbol
#define sipImportSymbol             sipAPI_et99->api_import_symbol
#define sipFindType                 sipAPI_et99->api_find_type
#define sipFindNamedEnum            sipAPI_et99->api_find_named_enum
#define sipBytes_AsChar             sipAPI_et99->api_bytes_as_char
#define sipBytes_AsString           sipAPI_et99->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_et99->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_et99->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_et99->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_et99->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_et99->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_et99->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_et99->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_et99->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_et99->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_et99->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_et99->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_et99->api_invoke_slot
#define sipSaveSlot                 sipAPI_et99->api_save_slot
#define sipClearAnySlotReference    sipAPI_et99->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_et99->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->type->td_cname)
#define sipDeprecated               sipAPI_et99->api_deprecated
#define sipKeepReference            sipAPI_et99->api_keep_reference
#define sipRegisterPyType           sipAPI_et99->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_et99->api_type_from_py_type_object
#define sipTypeScope                sipAPI_et99->api_type_scope
#define sipResolveTypedef           sipAPI_et99->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_et99->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_et99->api_is_api_enabled
#define sipExportModule             sipAPI_et99->api_export_module
#define sipInitModule               sipAPI_et99->api_init_module

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_et99->api_map_string_to_class
#define sipMapIntToClass            sipAPI_et99->api_map_int_to_class
#define sipFindClass                sipAPI_et99->api_find_class
#define sipFindMappedType           sipAPI_et99->api_find_mapped_type
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_et99->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->type)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->type, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->type, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->type, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->type, (t))

/* The strings used by this module. */
extern const char sipStrings_et99[];

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_et99;
extern sipExportedModuleDef sipModuleAPI_et99;

#endif
