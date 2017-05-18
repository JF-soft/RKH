/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_RKHTRC_RECORD_H
#define _MOCK_RKHTRC_RECORD_H

#include "rkhtrc_record.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mock_rkhtrc_record_Init(void);
void Mock_rkhtrc_record_Destroy(void);
void Mock_rkhtrc_record_Verify(void);




#define rkh_trc_init_Ignore() rkh_trc_init_CMockIgnore()
void rkh_trc_init_CMockIgnore(void);
#define rkh_trc_init_Expect() rkh_trc_init_CMockExpect(__LINE__)
void rkh_trc_init_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_rkh_trc_init_CALLBACK)(int cmock_num_calls);
void rkh_trc_init_StubWithCallback(CMOCK_rkh_trc_init_CALLBACK Callback);
#define rkh_trc_begin_Ignore() rkh_trc_begin_CMockIgnore()
void rkh_trc_begin_CMockIgnore(void);
#define rkh_trc_begin_Expect(eid) rkh_trc_begin_CMockExpect(__LINE__, eid)
void rkh_trc_begin_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_TE_ID_T eid);
typedef void (* CMOCK_rkh_trc_begin_CALLBACK)(RKH_TE_ID_T eid, int cmock_num_calls);
void rkh_trc_begin_StubWithCallback(CMOCK_rkh_trc_begin_CALLBACK Callback);
#define rkh_trc_begin_IgnoreArg_eid() rkh_trc_begin_CMockIgnoreArg_eid(__LINE__)
void rkh_trc_begin_CMockIgnoreArg_eid(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_end_Ignore() rkh_trc_end_CMockIgnore()
void rkh_trc_end_CMockIgnore(void);
#define rkh_trc_end_Expect() rkh_trc_end_CMockExpect(__LINE__)
void rkh_trc_end_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_rkh_trc_end_CALLBACK)(int cmock_num_calls);
void rkh_trc_end_StubWithCallback(CMOCK_rkh_trc_end_CALLBACK Callback);
#define rkh_trc_clear_chk_Ignore() rkh_trc_clear_chk_CMockIgnore()
void rkh_trc_clear_chk_CMockIgnore(void);
#define rkh_trc_clear_chk_Expect() rkh_trc_clear_chk_CMockExpect(__LINE__)
void rkh_trc_clear_chk_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_rkh_trc_clear_chk_CALLBACK)(int cmock_num_calls);
void rkh_trc_clear_chk_StubWithCallback(CMOCK_rkh_trc_clear_chk_CALLBACK Callback);
#define rkh_trc_u8_Ignore() rkh_trc_u8_CMockIgnore()
void rkh_trc_u8_CMockIgnore(void);
#define rkh_trc_u8_Expect(d) rkh_trc_u8_CMockExpect(__LINE__, d)
void rkh_trc_u8_CMockExpect(UNITY_LINE_TYPE cmock_line, rui8_t d);
typedef void (* CMOCK_rkh_trc_u8_CALLBACK)(rui8_t d, int cmock_num_calls);
void rkh_trc_u8_StubWithCallback(CMOCK_rkh_trc_u8_CALLBACK Callback);
#define rkh_trc_u8_IgnoreArg_d() rkh_trc_u8_CMockIgnoreArg_d(__LINE__)
void rkh_trc_u8_CMockIgnoreArg_d(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_u16_Ignore() rkh_trc_u16_CMockIgnore()
void rkh_trc_u16_CMockIgnore(void);
#define rkh_trc_u16_Expect(d) rkh_trc_u16_CMockExpect(__LINE__, d)
void rkh_trc_u16_CMockExpect(UNITY_LINE_TYPE cmock_line, rui16_t d);
typedef void (* CMOCK_rkh_trc_u16_CALLBACK)(rui16_t d, int cmock_num_calls);
void rkh_trc_u16_StubWithCallback(CMOCK_rkh_trc_u16_CALLBACK Callback);
#define rkh_trc_u16_IgnoreArg_d() rkh_trc_u16_CMockIgnoreArg_d(__LINE__)
void rkh_trc_u16_CMockIgnoreArg_d(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_u32_Ignore() rkh_trc_u32_CMockIgnore()
void rkh_trc_u32_CMockIgnore(void);
#define rkh_trc_u32_Expect(d) rkh_trc_u32_CMockExpect(__LINE__, d)
void rkh_trc_u32_CMockExpect(UNITY_LINE_TYPE cmock_line, rui32_t d);
typedef void (* CMOCK_rkh_trc_u32_CALLBACK)(rui32_t d, int cmock_num_calls);
void rkh_trc_u32_StubWithCallback(CMOCK_rkh_trc_u32_CALLBACK Callback);
#define rkh_trc_u32_IgnoreArg_d() rkh_trc_u32_CMockIgnoreArg_d(__LINE__)
void rkh_trc_u32_CMockIgnoreArg_d(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_str_Ignore() rkh_trc_str_CMockIgnore()
void rkh_trc_str_CMockIgnore(void);
#define rkh_trc_str_Expect(s) rkh_trc_str_CMockExpect(__LINE__, s)
void rkh_trc_str_CMockExpect(UNITY_LINE_TYPE cmock_line, const char* s);
typedef void (* CMOCK_rkh_trc_str_CALLBACK)(const char* s, int cmock_num_calls);
void rkh_trc_str_StubWithCallback(CMOCK_rkh_trc_str_CALLBACK Callback);
#define rkh_trc_str_IgnoreArg_s() rkh_trc_str_CMockIgnoreArg_s(__LINE__)
void rkh_trc_str_CMockIgnoreArg_s(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_obj_Ignore() rkh_trc_obj_CMockIgnore()
void rkh_trc_obj_CMockIgnore(void);
#define rkh_trc_obj_Expect(tre, obj, obj_name) rkh_trc_obj_CMockExpect(__LINE__, tre, obj, obj_name)
void rkh_trc_obj_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_TE_ID_T tre, rui8_t* obj, const char* obj_name);
typedef void (* CMOCK_rkh_trc_obj_CALLBACK)(RKH_TE_ID_T tre, rui8_t* obj, const char* obj_name, int cmock_num_calls);
void rkh_trc_obj_StubWithCallback(CMOCK_rkh_trc_obj_CALLBACK Callback);
#define rkh_trc_obj_IgnoreArg_tre() rkh_trc_obj_CMockIgnoreArg_tre(__LINE__)
void rkh_trc_obj_CMockIgnoreArg_tre(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_obj_IgnoreArg_obj() rkh_trc_obj_CMockIgnoreArg_obj(__LINE__)
void rkh_trc_obj_CMockIgnoreArg_obj(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_obj_IgnoreArg_obj_name() rkh_trc_obj_CMockIgnoreArg_obj_name(__LINE__)
void rkh_trc_obj_CMockIgnoreArg_obj_name(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_sig_Ignore() rkh_trc_sig_CMockIgnore()
void rkh_trc_sig_CMockIgnore(void);
#define rkh_trc_sig_Expect(sig, sig_name) rkh_trc_sig_CMockExpect(__LINE__, sig, sig_name)
void rkh_trc_sig_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_SIG_T sig, const char* sig_name);
typedef void (* CMOCK_rkh_trc_sig_CALLBACK)(RKH_SIG_T sig, const char* sig_name, int cmock_num_calls);
void rkh_trc_sig_StubWithCallback(CMOCK_rkh_trc_sig_CALLBACK Callback);
#define rkh_trc_sig_IgnoreArg_sig() rkh_trc_sig_CMockIgnoreArg_sig(__LINE__)
void rkh_trc_sig_CMockIgnoreArg_sig(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_sig_IgnoreArg_sig_name() rkh_trc_sig_CMockIgnoreArg_sig_name(__LINE__)
void rkh_trc_sig_CMockIgnoreArg_sig_name(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_ao_Ignore() rkh_trc_ao_CMockIgnore()
void rkh_trc_ao_CMockIgnore(void);
#define rkh_trc_ao_Expect(ao) rkh_trc_ao_CMockExpect(__LINE__, ao)
void rkh_trc_ao_CMockExpect(UNITY_LINE_TYPE cmock_line, void* ao);
typedef void (* CMOCK_rkh_trc_ao_CALLBACK)(void* ao, int cmock_num_calls);
void rkh_trc_ao_StubWithCallback(CMOCK_rkh_trc_ao_CALLBACK Callback);
#define rkh_trc_ao_IgnoreArg_ao() rkh_trc_ao_CMockIgnoreArg_ao(__LINE__)
void rkh_trc_ao_CMockIgnoreArg_ao(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_state_Ignore() rkh_trc_state_CMockIgnore()
void rkh_trc_state_CMockIgnore(void);
#define rkh_trc_state_Expect(ao, state) rkh_trc_state_CMockExpect(__LINE__, ao, state)
void rkh_trc_state_CMockExpect(UNITY_LINE_TYPE cmock_line, void* ao, rui8_t* state);
typedef void (* CMOCK_rkh_trc_state_CALLBACK)(void* ao, rui8_t* state, int cmock_num_calls);
void rkh_trc_state_StubWithCallback(CMOCK_rkh_trc_state_CALLBACK Callback);
#define rkh_trc_state_IgnoreArg_ao() rkh_trc_state_CMockIgnoreArg_ao(__LINE__)
void rkh_trc_state_CMockIgnoreArg_ao(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_state_IgnoreArg_state() rkh_trc_state_CMockIgnoreArg_state(__LINE__)
void rkh_trc_state_CMockIgnoreArg_state(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_fmt_u8_Ignore() rkh_trc_fmt_u8_CMockIgnore()
void rkh_trc_fmt_u8_CMockIgnore(void);
#define rkh_trc_fmt_u8_Expect(fmt, d) rkh_trc_fmt_u8_CMockExpect(__LINE__, fmt, d)
void rkh_trc_fmt_u8_CMockExpect(UNITY_LINE_TYPE cmock_line, rui8_t fmt, rui8_t d);
typedef void (* CMOCK_rkh_trc_fmt_u8_CALLBACK)(rui8_t fmt, rui8_t d, int cmock_num_calls);
void rkh_trc_fmt_u8_StubWithCallback(CMOCK_rkh_trc_fmt_u8_CALLBACK Callback);
#define rkh_trc_fmt_u8_IgnoreArg_fmt() rkh_trc_fmt_u8_CMockIgnoreArg_fmt(__LINE__)
void rkh_trc_fmt_u8_CMockIgnoreArg_fmt(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_fmt_u8_IgnoreArg_d() rkh_trc_fmt_u8_CMockIgnoreArg_d(__LINE__)
void rkh_trc_fmt_u8_CMockIgnoreArg_d(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_fmt_u16_Ignore() rkh_trc_fmt_u16_CMockIgnore()
void rkh_trc_fmt_u16_CMockIgnore(void);
#define rkh_trc_fmt_u16_Expect(fmt, d) rkh_trc_fmt_u16_CMockExpect(__LINE__, fmt, d)
void rkh_trc_fmt_u16_CMockExpect(UNITY_LINE_TYPE cmock_line, rui8_t fmt, rui16_t d);
typedef void (* CMOCK_rkh_trc_fmt_u16_CALLBACK)(rui8_t fmt, rui16_t d, int cmock_num_calls);
void rkh_trc_fmt_u16_StubWithCallback(CMOCK_rkh_trc_fmt_u16_CALLBACK Callback);
#define rkh_trc_fmt_u16_IgnoreArg_fmt() rkh_trc_fmt_u16_CMockIgnoreArg_fmt(__LINE__)
void rkh_trc_fmt_u16_CMockIgnoreArg_fmt(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_fmt_u16_IgnoreArg_d() rkh_trc_fmt_u16_CMockIgnoreArg_d(__LINE__)
void rkh_trc_fmt_u16_CMockIgnoreArg_d(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_fmt_u32_Ignore() rkh_trc_fmt_u32_CMockIgnore()
void rkh_trc_fmt_u32_CMockIgnore(void);
#define rkh_trc_fmt_u32_Expect(fmt, d) rkh_trc_fmt_u32_CMockExpect(__LINE__, fmt, d)
void rkh_trc_fmt_u32_CMockExpect(UNITY_LINE_TYPE cmock_line, rui8_t fmt, rui32_t d);
typedef void (* CMOCK_rkh_trc_fmt_u32_CALLBACK)(rui8_t fmt, rui32_t d, int cmock_num_calls);
void rkh_trc_fmt_u32_StubWithCallback(CMOCK_rkh_trc_fmt_u32_CALLBACK Callback);
#define rkh_trc_fmt_u32_IgnoreArg_fmt() rkh_trc_fmt_u32_CMockIgnoreArg_fmt(__LINE__)
void rkh_trc_fmt_u32_CMockIgnoreArg_fmt(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_fmt_u32_IgnoreArg_d() rkh_trc_fmt_u32_CMockIgnoreArg_d(__LINE__)
void rkh_trc_fmt_u32_CMockIgnoreArg_d(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_fmt_str_Ignore() rkh_trc_fmt_str_CMockIgnore()
void rkh_trc_fmt_str_CMockIgnore(void);
#define rkh_trc_fmt_str_Expect(s) rkh_trc_fmt_str_CMockExpect(__LINE__, s)
void rkh_trc_fmt_str_CMockExpect(UNITY_LINE_TYPE cmock_line, const char* s);
typedef void (* CMOCK_rkh_trc_fmt_str_CALLBACK)(const char* s, int cmock_num_calls);
void rkh_trc_fmt_str_StubWithCallback(CMOCK_rkh_trc_fmt_str_CALLBACK Callback);
#define rkh_trc_fmt_str_IgnoreArg_s() rkh_trc_fmt_str_CMockIgnoreArg_s(__LINE__)
void rkh_trc_fmt_str_CMockIgnoreArg_s(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_fmt_mem_Ignore() rkh_trc_fmt_mem_CMockIgnore()
void rkh_trc_fmt_mem_CMockIgnore(void);
#define rkh_trc_fmt_mem_Expect(mem, size) rkh_trc_fmt_mem_CMockExpect(__LINE__, mem, size)
void rkh_trc_fmt_mem_CMockExpect(UNITY_LINE_TYPE cmock_line, rui8_t const* mem, rui8_t size);
typedef void (* CMOCK_rkh_trc_fmt_mem_CALLBACK)(rui8_t const* mem, rui8_t size, int cmock_num_calls);
void rkh_trc_fmt_mem_StubWithCallback(CMOCK_rkh_trc_fmt_mem_CALLBACK Callback);
#define rkh_trc_fmt_mem_IgnoreArg_mem() rkh_trc_fmt_mem_CMockIgnoreArg_mem(__LINE__)
void rkh_trc_fmt_mem_CMockIgnoreArg_mem(UNITY_LINE_TYPE cmock_line);
#define rkh_trc_fmt_mem_IgnoreArg_size() rkh_trc_fmt_mem_CMockIgnoreArg_size(__LINE__)
void rkh_trc_fmt_mem_CMockIgnoreArg_size(UNITY_LINE_TYPE cmock_line);

#endif
