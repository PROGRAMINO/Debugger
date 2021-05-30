/******************************************************************
Created with PROGRAMINO IDE for Arduino
Project     : Debugger
Libraries   :
Author      : UlliS
Description : Debugger Example
******************************************************************/
int t   = 0;
int LED = 13;

void setup() {
    // write your setup code here, to run once
    pinMode(LED,OUTPUT);
    Serial.begin(19200);
}

void loop() {
    // write your main code here, to run repeatedly
    for(int i = 0 ; i < 10 ; i++) {
        // --> add debug variable i
        t++;
        // --> add debug variable t
        digitalWrite(LED,HIGH);
        delay(20);
        digitalWrite(LED,LOW);
        delay(20);      
    }
    
    // --> add a breakpoint her 
    for(int i=10;i>0;i--) {
        // --> is already in the list. How do you want to monitor at this point too!
        digitalWrite(LED,HIGH);
        delay(20);
        digitalWrite(LED,LOW);
        delay(20);
    }
 
    test();
    // --> add a breakpoint her
    
}
