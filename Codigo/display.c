	#include "msp430g2553.h"
	void main (void)
	{
  		void delay(void);
  		WDTCTL = WDTPW + WDTHOLD;// Para o WDT
		
  		P1DIR = 0xFF; // Seta P1DIR como Output, conectado ao display
  		P1OUT = 0x00; // Desliga os 7 segmentos
		
  		while (1) // Ciclo de loop
  		{
  			P1OUT = 0x3F; //0
  			delay();
  			P1OUT = 0x06; //1
  			delay();
  			P1OUT = 0x5B; //2
  			delay();
  			P1OUT = 0x4F; //3
  			delay();
  			P1OUT = 0x66; //4
  			delay();
 			P1OUT = 0x6D; //5
  			delay();
  			P1OUT = 0x7D; //6
  			delay();
 			P1OUT = 0x07; //7
 	    		delay();
  			P1OUT = 0x7F; //8
  			delay();
  			P1OUT = 0x6F; //9
  			delay();
  			P1OUT = 0x77; //A
  			delay();
  			P1OUT = 0x7C; //b
  			delay();
  			P1OUT = 0x39; //C
 			delay();
 			P1OUT = 0x5E; //d
			delay();
			P1OUT = 0x79; //E
			delay();
			P1OUT = 0x71; //F
			delay();
  		}
	}

  // Instância do delay manual 
	void delay()
	{
  		int i,j;
  		for(i=0;i<0xFFFF;i++)
			 for(j=0;j<2;j++);
	}
