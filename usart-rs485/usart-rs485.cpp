/*
 * usart.cpp
 *
 *  Created on: May 28, 2013
 *      Author: agu
 */

#include "usart-rs485.h"

UsartRs485::UsartRs485(USART_TypeDef * usart, uint32_t rcc_apbx_periph,
		void (*rcc_apbx_periph_clock_cmd)(uint32_t, FunctionalState), Gpio & de,
		Gpio & re, uint8_t buff_size, uint16_t time_out) :
		Usart(usart, rcc_apbx_periph, rcc_apbx_periph_clock_cmd, buff_size,
				time_out), _de(de), _re(re) {

}

UsartRs485::~UsartRs485() {

}

void UsartRs485::init(uint32_t baudrate, uint16_t word_length,
		uint16_t stop_bits, uint16_t parity, uint16_t mode,
		uint16_t hardware_flow_control) {

	this->Usart::init(baudrate, word_length, stop_bits, parity, mode,
			hardware_flow_control);

	_de.init(GPIO_Mode_Out_OD);
	_re.init(GPIO_Mode_Out_OD);

	_de.set(Bit_RESET);
	_re.set(Bit_RESET);
}

void UsartRs485::flush() {
	this->Usart::flush();
	_re.set(Bit_RESET);
	_de.set(Bit_RESET);
}

void UsartRs485::onTXE() {
	_re.set(Bit_SET);
	_de.set(Bit_SET);
	this->Usart::onTXE();
}
