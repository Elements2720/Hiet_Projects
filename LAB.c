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

//Q2 PULL DOWN RESISTOR SWITCH

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
