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
    setPinHigh_Expect(CLK_PIN);
    setPinLow_Expect(CLK_PIN);
	readPin_ExpectAndReturn(IO_PIN,0);
	readBit(IO_PIN);
	//uint32_t bit = readPin(pinNo);

}

void test_writeData_given_0xCD_and_addr_0xDEAD_and_DATA_0xC0_should_send_0XCDDEADC0(void){
	//write turn around
  setPinToOutput_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);

  // writeData(0xCD, 0xDEAD, 0xC0);
  //cmd0.....0xCD
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //cmd1
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //cmd2
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //cmd3
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //cmd4
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //cmd5
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //cmd6
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //cmd7
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address0......0xDEAD
  setPinHigh_Expect(IO_PIN);
 setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address1
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address2
  setPinHigh_Expect(IO_PIN);
 setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address3
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address4
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  //address5
  setPinHigh_Expect(IO_PIN);
 setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address6
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address7
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address8
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address9
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address10
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address11
 setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address12
 setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address13
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address14
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  //address15
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//data0.....oxC0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//data1
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//data2
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//data3
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//data4
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//data5
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//data6
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//data7
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	writeData(0xCD, 0xDEAD, 0xC0);

}

void test_readData_given_0xAB_and_addr_0XFACE_should_sent_0xABFACE_and_turnaround_and_receive_0xBE(void){
	
  //write turn around
  setPinToOutput_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);
  
  
	//cmd0 ....0xAB
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//CMD1
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//CMD2
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//CMD3
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//CMD4
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//CMD5
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//CMD6
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
	//CMD7
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  
 //address0...0xFACE
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //1
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //2
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //3
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //4
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //5
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //6
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //7
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //8
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //9
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //10
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //11
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //12
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //13
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //14
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
 //15
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  
  // //READ TURN AROUND
  setPinToInput_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  
  // setPinLow_Expect(CLK_PIN);
  // setPinHigh_Expect(CLK_PIN);
  // readPin_ExpectAndReturn(IO_PIN, 0);
  // setPinLow_Expect(CLK_PIN);
  // setPinHigh_Expect(CLK_PIN);
  // readPin_ExpectAndReturn(IO_PIN, 1);
  // setPinLow_Expect(CLK_PIN);
  // setPinHigh_Expect(CLK_PIN);
  // readPin_ExpectAndReturn(IO_PIN, 1);
  // setPinLow_Expect(CLK_PIN);
  // setPinHigh_Expect(CLK_PIN);
  // readPin_ExpectAndReturn(IO_PIN, 1);
  // setPinLow_Expect(CLK_PIN);
  // setPinHigh_Expect(CLK_PIN);
  // readPin_ExpectAndReturn(IO_PIN, 1);
  // setPinLow_Expect(CLK_PIN);
  // setPinHigh_Expect(CLK_PIN);
  // readPin_ExpectAndReturn(IO_PIN, 1);
  // setPinLow_Expect(CLK_PIN);
  // setPinHigh_Expect(CLK_PIN);
 // readPin_ExpectAndReturn(IO_PIN, 0);
  // setPinLow_Expect(CLK_PIN);
  // setPinHigh_Expect(CLK_PIN);
  // readPin_ExpectAndReturn(IO_PIN, 1);
  
  
  
  uint8_t getData = readData(0xAB,0xFACE);
 
}


