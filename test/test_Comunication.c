#include "unity.h"
#include "Comunication.h"
#include "mock_Signal.h"
#include <stdint.h>
#include <stdio.h>


void setUp(void){}

void tearDown(void){}

void test_sendBitHigh_given_xxxx_should_xxxx(){
 setPinHigh_Expect(IO_PIN);
 setPinLow_Expect(CLK_PIN);
 setPinHigh_Expect(CLK_PIN);
 sendBitHigh(IO_PIN);
}
void test_sendBitLow_given_xxxx_should_xxxx(){
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  sendBitLow(IO_PIN);
}
void test_readBit_given_xxxx_should_xxxx(){
    //int data;
    setPinHigh_Expect(CLK_PIN);
    setPinLow_Expect(CLK_PIN);
   // uint32_t bit = getPin(bit);
   //readBit_ExpectAndReturn(IO_PIN,data);   
}

void test_writeData_given_0xCD_and_addr_0XDEAD_and_DATA_0XC0_should_send_0XCDDEADC0(void){
  writeData(0xCD, 0xDEAD, 0xCD);
  setPinToOutput_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinToOutput_Expect(IO_PIN);
  setPinToInput_Expect(CLK_PIN);
  //data0
  setPinHigh(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
  //data1
  setPinLow(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
  //data2
  setPinHigh(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
  //data3
  setPinHigh(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
  //data4
  setPinLow(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
  //data5
  setPinLow(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
  //data6
  setPinHigh(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
  //data7
  setPinHigh(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
  //address0
  //address0
  //address0
  //address0
  //address0
  
  
  

 
}

void test_readData_given_0xAB_and_addr_0XFACE_should_sent_0xABFACE_and_turnaround_and_receive_0xBE(void){}
  

