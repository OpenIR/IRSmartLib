/*
 * =====================================================================================
 *
 *       Filename:  IRSmartSend.hpp
 *
 *    Description:  Header file for IRSmartSend.cpp
 *
 *        Version:  1.0
 *        Created:  08/17/15 18:38:40
 *       Revision:  none
 *       Compiler:  Arduino IDE
 *
 *         Author:  z3t0, pcoughlin
 *   Organization:  OpenIR
 *
 * =====================================================================================
 */

#ifndef IRS_SMART_SEND_HPP
#define IRS_SMART_SEND_HPP

class IRSend
{
	public:
		void sendRaw(unsigned short buf[], unsigned char hz, unsigned char pin);
		void mark(unsigned short time);
		void space(unsigned short time);
		void delay_usec(unsigned short time);
}

#endif
