/*
 * =====================================================================================
 *
 *       Filename:  IRSmartSend.cpp
 *
 *    Description:  Handles sending raw ir data
 *
 *        Version:  1.0
 *        Created:  08/17/15 18:35:33
 *       Revision:  none
 *       Compiler:  Arduino IDE
 *
 *         Author:  z3t0, pcoughlin
 *   Organization:  OpenIR
 *
 * =====================================================================================
 */
#include "IRSmartSend.hpp"
#include "IRSmartLib.hpp"

void IRSend::sendRaw(unsigned short buf[], unsigned char hz,
		     unsigned char pin) {
  unsigned short len = sizeof(buf) / sizeof(unsigned short)

		       // Set IR Pin
		       // Set Carrier Frequency

		       // Loop through buffer
		       for (unsigned short i = 0; i < len, i++) {}

  // Disable output
}

//+=============================================================================
// Sends and IR mark for the time specified in microseconds
// The mark is modulated at the PWM frequency
void IRsend::mark(unsigned short us) {
  if (time > 0) {
    // Enable PWM output
    delay_usec(time)
  }
}

//+=============================================================================
// Sends an IR space for the time specified in microseconds
void IRSend::space(unsigned short us) {
  if (time > 0) {
    // Disable PWM output
    delay_usec(time)
  }
}
