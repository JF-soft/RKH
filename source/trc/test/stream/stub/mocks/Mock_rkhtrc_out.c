/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "Mock_rkhtrc_out.h"

static const char* CMockString_rkh_trc_close = "rkh_trc_close";
static const char* CMockString_rkh_trc_flush = "rkh_trc_flush";
static const char* CMockString_rkh_trc_getts = "rkh_trc_getts";
static const char* CMockString_rkh_trc_open = "rkh_trc_open";

typedef struct _CMOCK_rkh_trc_open_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_rkh_trc_open_CALL_INSTANCE;

typedef struct _CMOCK_rkh_trc_close_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_rkh_trc_close_CALL_INSTANCE;

typedef struct _CMOCK_rkh_trc_flush_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_rkh_trc_flush_CALL_INSTANCE;

typedef struct _CMOCK_rkh_trc_getts_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  RKH_TS_T ReturnVal;

} CMOCK_rkh_trc_getts_CALL_INSTANCE;

static struct Mock_rkhtrc_outInstance
{
  int rkh_trc_open_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE rkh_trc_open_CallInstance;
  int rkh_trc_close_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE rkh_trc_close_CallInstance;
  int rkh_trc_flush_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE rkh_trc_flush_CallInstance;
  int rkh_trc_getts_IgnoreBool;
  RKH_TS_T rkh_trc_getts_FinalReturn;
  CMOCK_MEM_INDEX_TYPE rkh_trc_getts_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mock_rkhtrc_out_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.rkh_trc_open_IgnoreBool)
    Mock.rkh_trc_open_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_trc_open);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_trc_open_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_trc_close_IgnoreBool)
    Mock.rkh_trc_close_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_trc_close);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_trc_close_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_trc_flush_IgnoreBool)
    Mock.rkh_trc_flush_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_trc_flush);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_trc_flush_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.rkh_trc_getts_IgnoreBool)
    Mock.rkh_trc_getts_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_rkh_trc_getts);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_trc_getts_CallInstance, cmock_line, CMockStringCalledLess);
}

void Mock_rkhtrc_out_Init(void)
{
  Mock_rkhtrc_out_Destroy();
}

void Mock_rkhtrc_out_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void rkh_trc_open(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_trc_open_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_trc_open);
  cmock_call_instance = (CMOCK_rkh_trc_open_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_trc_open_CallInstance);
  Mock.rkh_trc_open_CallInstance = CMock_Guts_MemNext(Mock.rkh_trc_open_CallInstance);
  if (Mock.rkh_trc_open_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void rkh_trc_open_CMockIgnore(void)
{
  Mock.rkh_trc_open_IgnoreBool = (int)1;
}

void rkh_trc_open_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_open_CALL_INSTANCE));
  CMOCK_rkh_trc_open_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_open_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_open_CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_open_CallInstance, cmock_guts_index);
  Mock.rkh_trc_open_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void rkh_trc_close(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_trc_close_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_trc_close);
  cmock_call_instance = (CMOCK_rkh_trc_close_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_trc_close_CallInstance);
  Mock.rkh_trc_close_CallInstance = CMock_Guts_MemNext(Mock.rkh_trc_close_CallInstance);
  if (Mock.rkh_trc_close_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void rkh_trc_close_CMockIgnore(void)
{
  Mock.rkh_trc_close_IgnoreBool = (int)1;
}

void rkh_trc_close_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_close_CALL_INSTANCE));
  CMOCK_rkh_trc_close_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_close_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_close_CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_close_CallInstance, cmock_guts_index);
  Mock.rkh_trc_close_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void rkh_trc_flush(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_trc_flush_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_trc_flush);
  cmock_call_instance = (CMOCK_rkh_trc_flush_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_trc_flush_CallInstance);
  Mock.rkh_trc_flush_CallInstance = CMock_Guts_MemNext(Mock.rkh_trc_flush_CallInstance);
  if (Mock.rkh_trc_flush_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void rkh_trc_flush_CMockIgnore(void)
{
  Mock.rkh_trc_flush_IgnoreBool = (int)1;
}

void rkh_trc_flush_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_flush_CALL_INSTANCE));
  CMOCK_rkh_trc_flush_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_flush_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_flush_CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_flush_CallInstance, cmock_guts_index);
  Mock.rkh_trc_flush_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

RKH_TS_T rkh_trc_getts(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_trc_getts_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rkh_trc_getts);
  cmock_call_instance = (CMOCK_rkh_trc_getts_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_trc_getts_CallInstance);
  Mock.rkh_trc_getts_CallInstance = CMock_Guts_MemNext(Mock.rkh_trc_getts_CallInstance);
  if (Mock.rkh_trc_getts_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.rkh_trc_getts_FinalReturn;
    memcpy(&Mock.rkh_trc_getts_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(RKH_TS_T));
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void rkh_trc_getts_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, RKH_TS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_getts_CALL_INSTANCE));
  CMOCK_rkh_trc_getts_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_getts_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_getts_CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_getts_CallInstance, cmock_guts_index);
  Mock.rkh_trc_getts_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.rkh_trc_getts_IgnoreBool = (int)1;
}

void rkh_trc_getts_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RKH_TS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_trc_getts_CALL_INSTANCE));
  CMOCK_rkh_trc_getts_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_trc_getts_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_trc_getts_CallInstance = CMock_Guts_MemChain(Mock.rkh_trc_getts_CallInstance, cmock_guts_index);
  Mock.rkh_trc_getts_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(RKH_TS_T));
  UNITY_CLR_DETAILS();
}
