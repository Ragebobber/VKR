/*
 * VKRFinal_V1.c
 *
 * Created: 12.06.2020 11:26:19
 * Author : stalk
 */ 
#ifndef F_CPU
#define F_CPU 11059200UL	//	рабочая частота
#endif
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>


void USART_INIT(unsigned int speed){
	UBRRH = (unsigned char)(speed>>8);
	UBRRL = (unsigned char)speed;
	
	UCSRB=(1<<RXEN)|( 1<<TXEN); //Включаем прием и передачу по USART
	UCSRB |= (1<<RXCIE); //Разрешаем прерывание при передаче
	UCSRA |= (1<<U2X); // удвоение скорости
	UCSRC = (1<<URSEL)|(1<<USBS)|(1<<UCSZ1)|(1<<UCSZ0);// Обращаемся именно к регистру UCSRC (URSEL=1),
	//ассинхронный режим (UMSEL=0),
	//1 стоп-бит (USBS=0), 8-бит посылка (UCSZ1=1 и UCSZ0=1)
	UCSRC |= (1<<UPM1);//четность
}
void USART_Transmit( unsigned char data )
{
	while ( !(UCSRA & (1<<UDRE)) ); //Ожидание опустошения буфера приема
	UDR = data; //Начало передачи данных
}

int main(void)
{
	USART_INIT(11);//115.2k

    while (1) 
    {
		
			USART_Transmit('O');//Передаем при включении
			USART_Transmit('k');//сообщение "Ok!", что свидетельствует
			USART_Transmit('!');//о правильно работе программы
			USART_Transmit(0x0d);//переход в начало строки
			USART_Transmit(0x0a);//переход на новую строку
			_delay_ms(1000);

    }
}

