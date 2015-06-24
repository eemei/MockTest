#include "Comunication.h"
#include "Signal.h"
#include <stdio.h>

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
  uint32_t bit = getPin(bit);
  return bit;
} 
/*
* brief perform write to read to read turn around
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
* brief perform read to write to read turn around
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


void writeData(uint8_t cmd, uint16_t address, uint8_t data){
  
  int i= 0;
  char comp1, comp2,comp3;
  writeturnAroundIO(IO_PIN);
  setPinToOutput (IO_PIN);
  setPinToInput (CLK_PIN);
  // //dataBit[8] = {"1","1","0","0","1","1","0","1"};
  //printf("where are u?");
  for(i=0; i<=8;i++){
    comp1 = data & 1;
    if (comp1 == 1){
      sendBitHigh(IO_PIN);
    }
    else {
      sendBitLow(IO_PIN);
    }
    data = data >>1; 
  }
  
  for (i = 0; i<16; i++){
    comp2 = address & 1;
    if (comp2 == 1){
      sendBitHigh(IO_PIN);
    }
    else {
      sendBitLow(IO_PIN);
    }
    address = address >>1;
  }
  
  for (i =0; i<8;i++){
    comp3 = cmd & 1;
    if (comp3 == 1){
      sendBitHigh (IO_PIN);
    }
    else{
      sendBitLow(IO_PIN);
    }
    cmd = cmd >>1;
  }
}


uint8_t readData(uint8_t cmd, uint16_t address){
  int i =0;
  int j =0;
  char comp;
  readturnAroundIO(IO_PIN);
  setPinToInput(IO_PIN);
  setPinToInput(CLK_PIN);
  for (i = 0; i<16; i++){
    comp = address & 1;
    if(comp == 1){
      sendBitHigh(IO_PIN);
    }
    else {
      sendBitLow(IO_PIN);
    }
    address = address>>1;
  }
  
  for (i=0; i<8;i++){
    comp = cmd & 1;
    if (comp ==1){
      sendBitHigh (IO_PIN);
    }
    else {
      sendBitHigh (IO_PIN);
    }
    cmd = cmd >> 1;
  }
  for (j=0; j<8;j++){
    
  }
   //read 
    
}
  
