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
		
		//--------------------------------------//
  		//    Hexadecimal 0-F      //
  		//--------------------------------------//
		
  			P1OUT = 0x3F; //0
  			P1OUT = 0x06; //1
  			P1OUT = 0x5B; //2
 			P1OUT = 0x4F; //3
  			P1OUT = 0x66; //4
  			P1OUT = 0x6D; //5
  			P1OUT = 0x7D; //6
  			P1OUT = 0x07; //7
  			P1OUT = 0x7F; //8
  			P1OUT = 0x6F; //9
  			P1OUT = 0x77; //A
  			P1OUT = 0x7C; //b
  			P1OUT = 0x39; //C
  			P1OUT = 0x5E; //d
  			P1OUT = 0x79; //E
  			P1OUT = 0x71; //F
			
  		//--------------------------------------------//
 		//      Caracteres Extras                     //	
  		//--------------------------------------------//
		
  			P1OUT = 0x76; //H
  			P1OUT = 0x38; //L
  			P1OUT = 0x54; //n
  			P1OUT = 0x73; //P
  			P1OUT = 0x78; //T
  			P1OUT = 0x3E; //U
  			P1OUT = 0x72; //Y
  
	}
