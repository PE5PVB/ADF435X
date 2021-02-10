/* Very simple initialisation of the ADF435X generator
 *  v1.00 - 2021 Sjef Verhoeven PE5PVB
 *  
 *  Based on original class from Jan Swanepoel
 *  
 *  Stepsize = 100Hz
 *  RF output = 2dBm
 *  
 *  Created for 32 bit microcontrollers. On Arduino framework be aware of the 32bit variable limit.
 *  
 *  www.pe5pvb.nl
 */

#include "ADF435X.h"
ADF435X ADF435X;

void setup() 
{
  ADF435X.Init(A0,25000000);        // Init of ADF435X and set the Load enable pin and Reference oscillator frequency
  ADF435X.SetFreq(1452125);         // Set the ADF435X to frequency (100Hz stepsize)
}

void loop() 
{
}
