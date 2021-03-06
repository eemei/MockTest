/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "mock_Signal.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_sendBitHigh_given_xxxx_should_xxxx(void);
extern void test_sendBitLow_given_xxxx_should_xxxx(void);
extern void test_readBit_given_xxxx_should_xxxx(void);
extern void test_writeData_given_0xCD_and_addr_0xDEAD_and_DATA_0xC0_should_send_0XCDDEADC0(void);
extern void test_readData_given_0xAB_and_addr_0XFACE_should_sent_0xABFACE_and_turnaround_and_receive_0xBE(void);


//=======Mock Management=====
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_Signal_Init();
}
static void CMock_Verify(void)
{
  mock_Signal_Verify();
}
static void CMock_Destroy(void)
{
  mock_Signal_Destroy();
}

//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


//=======MAIN=====
int main(void)
{
  UnityBegin("test_Comunication.c");
  RUN_TEST(test_sendBitHigh_given_xxxx_should_xxxx, 12);
  RUN_TEST(test_sendBitLow_given_xxxx_should_xxxx, 18);
  RUN_TEST(test_readBit_given_xxxx_should_xxxx, 24);
  RUN_TEST(test_writeData_given_0xCD_and_addr_0xDEAD_and_DATA_0xC0_should_send_0XCDDEADC0, 33);
  RUN_TEST(test_readData_given_0xAB_and_addr_0XFACE_should_sent_0xABFACE_and_turnaround_and_receive_0xBE, 172);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}
