#include "Blink.h"

Blink::Blink(int val){
	pinNum = val;
	pinMode(pinNum, OUTPUT);
}

void Blink::now(void){
	digitalWrite(pinNum, HIGH);
	delay(defaultIntervalMillis);
	digitalWrite(pinNum, LOW);
}


