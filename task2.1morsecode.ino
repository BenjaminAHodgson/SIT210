

int led1 = D6; 

int led2 = D7; 

void setup() {

	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);

}


void loop() {
    
    // The letter B
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
    delay(1500);

	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(500);
	
    digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
    delay(500);
    
    digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(500);
	
    digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
    delay(500);
    
    digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(500);
	
    digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
    delay(500);
    
    //Inter-Character gap
    digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(1500);
    
    // The letter E
    digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
    delay(500);
    
    //Inter-Character gap
    digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(1500);
	
	// The letter N
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
    delay(1500);
    
    digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(500);
	

	
}
