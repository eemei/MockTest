#include "mock_Signal.h"
#include "Comunication.h"
#include "unity.h"








void setUp(void){}



void tearDown(void){}



void test_sendBitHigh_given_xxxx_should_xxxx(){

 setPinHigh_CMockExpect(13, 4);

 setPinLow_CMockExpect(14, 4);

 setPinHigh_CMockExpect(15, 4);

 sendBitHigh(4);

}

void test_sendBitLow_given_xxxx_should_xxxx(){

  setPinLow_CMockExpect(19, 4);

  setPinLow_CMockExpect(20, 4);

  setPinHigh_CMockExpect(21, 4);

  sendBitLow(4);

}

void test_readBit_given_xxxx_should_xxxx(){



    setPinHigh_CMockExpect(26, 4);

    setPinLow_CMockExpect(27, 4);





}



void test_writeData_given_0xCD_and_addr_0XDEAD_and_DATA_0XC0_should_send_0XCDDEADC0(void){

  setPinToOutput_CMockExpect(33, 4);

  setPinHigh_CMockExpect(34, 4);

  setPinLow_CMockExpect(35, 4);

  setPinToOutput_CMockExpect(36, 4);

  setPinToInput_CMockExpect(37, 4);



  setPinHigh(4);

  setPinLow(4);

  setPinHigh(4);

  writeData(0xCD, 0xDEAD, 0xCD);



}



void test_readData_given_0xAB_and_addr_0XFACE_should_sent_0xABFACE_and_turnaround_and_receive_0xBE(void){}
