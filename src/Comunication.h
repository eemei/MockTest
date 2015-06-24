#ifndef Comunication_H
#define Comunication_H
#include<stdint.h>

void writeData (uint8_t cmd, uint16_t address, uint8_t data);
uint8_t readData(uint8_t cmd, uint16_t address);
void sendBitHigh(int pinNo);
void sendBitLow(int pinNo);
uint32_t readBit(int pinNo);
void readturnAroundIO(int pinNo);
void writeturnAroundIO(int pinNo);

#endif // Comunication_H
