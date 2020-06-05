#define F_CPU 11059200UL //11.0592 MHz
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define Uref 5
int Val1,Val2,Val3; // в этих переменных хранятся последние считанные из каналов значения
void AD_convertet_init(void){
	DDRC &= ~((1<<3) | (1<<4) | (1<<5));// Регистр на вход  PC5 PC4 PC3		
	//ADC init
	ADCSRA |= (1<<ADEN);//Вкл АЦП
	ADCSRA |= (1<<ADPS2) | (1<<ADPS1) | (1<<ADPS0);//Установка частоты дескр = F_CPU / 128 = ?86 400? Гц
	ADCSRA |= 1<<ADIE;// разрешаем прерывание
	
	ADMUX |= (1<<REFS0); //AVCC with external capacitor at AREF pin 
	ADMUX &= ~(1<<REFS1);
	
	ADMUX &= ~(1<<ADLAR); // Правостороннее выравнивание 
	
	ADMUX &= ~((1<<MUX3) | (1<<MUX2));//Задействуем ADC3
	ADMUX |= (1<<MUX1) | (1<<MUX0);
	
	// запускаем первое АЦ-преобразование
	ADCSRA |= 1<<ADSC;
}

void USART_ini(unsigned int speed){
	//Определяем скорость передачи согласно UBRR — определяет скорость приема/передачи данных (UBRRH - старший UBRRL - младший)
	UBRRH = (unsigned char)(speed>>8);
	UBRRL= (unsigned char)speed;	
	/*
	UCSRB — определяет какие прерывания генерировать при наступление событий, 
	разрешает/запрещает передачу/прием, совместно с регистром UCSRC 
	определяет разрядность передаваемого/принимаемого слова
	*/
	UCSRB=(1<<RXEN)|( 1<<TXEN); //Включаем прием и передачу по USART
	UCSRA |=(1<<U2X);
	/*
	UCSRA — содержит в основном флаги состояния приема/передачи данных.
	*/
	/* UCSRC — задает режим работы синхронный/асинхронный, определяет правила работы контроля данных — 
	проверка на четность/не честность или отключено, количество стоп битов, совместно с 
	регистром UCSRB определяет разрядность передаваемого/принимаемого слова, 
	определяет по какому фронту принимать/передавать данные — по спадающему или по нарастающему.
	*/	
	UCSRC &= ~((1<<UMSEL) | (1<<USBS)); // режим асинхронный |  1 стоп бит
	UCSRC |= (1<<URSEL) | (1<<UCSZ1) | (1<<UCSZ0);//при установке 1 мы работаем с регистром  | Размер посылки 8 бит		
}

void USART_Transmit( unsigned char data ) //Функция отправки данных
{
	while ( !(UCSRA & (1<<UDRE)) ); //Ожидание опустошения буфера приема
	UDR = data; //Начало передачи данных
}

void send_int_Uart(unsigned int c)//	Отправка числа от 0000 до 9999
{
	unsigned char temp;
	c=c%10000;
	temp=c/100;
	USART_Transmit(temp/10+'0');
	USART_Transmit(temp%10+'0');
	temp=c%100;;
	USART_Transmit(temp/10+'0');
	USART_Transmit(temp%10+'0');	
}
void send_Uart_str(unsigned char *s)//	Отправка строки
{
	while (*s != 0) USART_Transmit(*s++);
}
ISR(ADC_vect) {
	uint8_t lowByte;
	uint16_t Result;
	// 1. считываем младший и старший байты результата АЦ-преобразования и образуем из них 10-битовый результат
	lowByte = ADCL;
	Result = ADCH<<8 | lowByte;
	
	switch (ADMUX) {
		case 0x43://PC3
		ADMUX = 0x44;
		break;
		case 0x44://PC4
		ADMUX = 0x45;
		break;
		case 0x45://PC5
		ADMUX = 0x43;
		break;
		default:
		//Default code
		break;
	}	
	send_int_Uart(Result);
	USART_Transmit(13);
	_delay_ms(1000);
	//запускаем новое АЦ-преобразование
	ADCSRA |= 1<<ADSC;
}



int main(void)
{
	AD_convertet_init();
	USART_ini(11);//BaudRate(bps) = 115.2k			
	sei();
	while (1) 
    {

    }
}
/*
Задачи 
1.Тактирование - да
2.АЦП - да
3.Передача на пк - да

PC5 - Ухо ФПГ
PC4 - ЭКГ
PC3 - Палец ФПГ
*/
