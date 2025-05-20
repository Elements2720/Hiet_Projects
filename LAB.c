//Q1 TOGGLE LED 
void main () {
	TRISC.F5 = 0;
	TRISB.F1 = 1;

	while(1){
		if (PORTB.F1 == 0) {
			PORTC.F5 = 1;
		} else {
			PORTC.F5 = 0;
		}
	}
}

//Q2 PULL-DOWN RESISTOR SWITCH

void main() {
    TRISC.F5 = 0; // LED Output
    TRISB.F4 = 1; // Button Input

     while(1) {
        if (PORTB.F4 == 0) {
            PORTC.F5 = 0; // LED ON when button is pressed
        } else {
            PORTC.F5 = 1; // LED OFF when button is not pressed
        }
    }
}


//Q3 PULL UP RESISTOR SWITCH
void main() {
    TRISC.F5 = 0; // LED Output
    TRISB.F4 = 1; // Button Input

     while(1) {
        if (PORTB.F4 == 1) {
            PORTC.F5 = 0; // LED ON when button is pressed
        } else {
            PORTC.F5 = 1; // LED OFF when button is not pressed
        }
    }
}


//Q4 7-Segmant from 0 ==> 9 without decoder

void main() {
  TRISB = 0b10000000;
  for (;;) {
    PORTB = 0b00111111;  // 0
    delay_ms(500);
    PORTB = 0b00000110;  // 1
    delay_ms(500);
    PORTB = 0b01011011;  // 2
    delay_ms(500);
    PORTB = 0b01001111;  // 3
    delay_ms(500);
    PORTB = 0b01100110;  // 4
    delay_ms(500);
    PORTB = 0b01101101;  // 5
    delay_ms(500);
    PORTB = 0b01111101;  // 6
    delay_ms(500);
    PORTB = 0b00000111;  // 7
    delay_ms(500);
    PORTB = 0b01111111;  // 8
    delay_ms(500);
    PORTB = 0b01101111;  // 9
    delay_ms(500);
  }
}

//Q5 7-Segment Decoder 0 ==> 9 Common Cathode
void main () {
	unsigned char i;
	TRISB = 0;
	for (;;) 
	{
		for (i = 0; i <= 9; i++) 
		{
			PORTB = i;
			delay_ms(700);
		}
	}
}
