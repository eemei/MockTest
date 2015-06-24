#include "Comunication.h"
#include "Signal.h"
#include <stdio.h>
#include <stdint.h>

void sendBitHigh(int pinNo){
 setPinHigh(IO_PIN);
 setPinLow(CLK_PIN);
 setPinHigh(CLK_PIN);
  }

void sendBitLow(int pinNo){
  setPinLow(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
}

uint32_t readBit(int pinNo){
  setPinHigh(CLK_PIN);
  setPinLow(CLK_PIN);
  uint32_t bit = readPin(pinNo);
  return bit;
}
/*
* brief perform write to read turn around
*@param pinNo is the pin to do turn around
*step: 1)set pin as input
*       2) set clk low
*       3) set clk high
*/
void readturnAroundIO(int pinNo){
  setPinToInput(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
}
/*
* brief perform write to read turn around
*@param pinNo is the pin to do turn around
*step: 1)set pin as output
*       2) set clk high
*       3) set clk low
*/
void writeturnAroundIO(int pinNo){
  setPinToOutput(IO_PIN);
  setPinHigh(CLK_PIN);
  setPinLow(CLK_PIN);
}

/*
* 1) cmd = 0xCD
* 2) ADDRESS = 0xDEAD
* 3) WRITE
*/
void writeData(uint8_t cmd, uint16_t address, uint8_t data){

  int i= 0;
  uint8_t comp1,comp3;
  uint16_t comp2;
  
  writeturnAroundIO(IO_PIN);
  // //setPinToOutput (IO_PIN);
 // //setPinLow(CLK_PIN);
 // //setPinHigh(CLK_PIN);

  for(i=0; i<8;i++){
    comp1 = cmd & 0x01;
    if (comp1 == 1){
      sendBitHigh(IO_PIN);
    }
    else {
      sendBitLow(IO_PIN);
    }
    cmd = cmd >>1;
  }

  for (i = 0; i<16; i++){
    comp2 = address & 0x0001;
    if (comp2 == 1){
      sendBitHigh(IO_PIN);
    }
    else {
      sendBitLow(IO_PIN);
    }
    address = address >>1;
  }

  for (i =0; i<8;i++){
    comp3 = data & 0x01;
    if (comp3 == 1){
      sendBitHigh (IO_PIN);
    }
    else{
      sendBitLow(IO_PIN);
    }
    data = data >>1;
  }
}
/*
*  1) write cmd address
*  2) read data
*
*/

uint8_t readData(uint8_t cmd, uint16_t address){
  int i = 0;
  int j = 0;
  uint8_t comp1, getData=0x00, bit;
  uint16_t comp2;
  //readturnAroundIO(IO_PIN);
  //setPinToInput(IO_PIN);
  //setPinToInput(CLK_PIN);
	//writeturnAroundIO(IO_PIN);
  setPinToOutput(IO_PIN);
  setPinHigh(CLK_PIN);
  setPinLow(CLK_PIN);
    for (i=0; i<8;i++){
    comp1 = cmd & 0x01;
    if (comp1 ==1){
      sendBitHigh (IO_PIN);
    }
    else {
      sendBitLow(IO_PIN);
    }
    cmd = cmd >> 1;
  }

  for (i = 0; i<16; i++){
    comp2 = address & 1;
    if(comp2 == 1){
      sendBitHigh(IO_PIN);
    }
    else {
      sendBitLow(IO_PIN);
    }
    address = address >> 1;
  }
 // readturnAroundIO(IO_PIN);
  setPinToInput(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
 
  // //read  BE = 10111110
  // /* 10111110
  // *	 0111110
  // *	 111110
  // *	 11110
  // *  1110
  // *  110
  // *  10
  // *  0
  // */
	// for (j=0; j<8;j++){
	  // bit = readBit(IO_PIN);
      // // getData = bit<<i;
	// }
  return getData;
}

