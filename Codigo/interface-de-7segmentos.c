	#include "msp430g2553.h"  //Inclui a biblioteca

	void main (void)
	{
  		WDTCTL = WDTPW + WDTHOLD; // Para o WDT
  		P1DIR = 0xFF;             // Seta P1DIR como Output, conectado ao display
		
  		//----------------------------------------------//
  		//       7 segmentos do Display numérico       //
  		//--------------------------------------------//
  
  			P1OUT = 0x00; // Sem segmentos ON
  			P1OUT = 0x01; // segmento a  ON
 			P1OUT = 0x02; // segmento b  ON
  			P1OUT = 0x04; // segmento c  ON
  			P1OUT = 0x08; // segmento d  ON
  			P1OUT = 0x10; // segmento e  ON
  			P1OUT = 0x20; // segmento f  ON
  			P1OUT = 0x40; // segmento g  ON
  			P1OUT = 0x80; // segmento dp ON
  			P1OUT = 0xFF; // Todos segmento ON
  
	}
