#ifndef Signal_H
#define Signal_H


#define IO_PIN  4
#define CLK_PIN 4

/*
*  @brief set pin to high
* @param pinNo is the pin to set high
*/

void setPinHigh(int pinNo);

/*
* @brief set pin to low
* @param pinNo is the pin to set low
*/
void setPinLow(int pinNo);
/*
*read the pin state
pinNO is the pin read from
return 1 if pin is high, otherwise 0

*/
int readPin(int pinNo);
/*
*brief the pin as output
*return pinNo is the pin set as output
*/
void setPinToOutput (int pinNo);
/*
*brief set pin as input
*param pinNo is the pin set as input
*/

void setPinToInput (int pinNo);

#endif // Signal_H
