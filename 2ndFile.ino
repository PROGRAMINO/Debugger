/******************************************************************
Created with PROGRAMINO IDE for Arduino
Project     : Debugger
Libraries   :
Author      : UlliS
Description : Debugger Example
******************************************************************/

int j = 0;

void test() {
    // --> add a breakpoint her
    int analogA0 = analogRead(A0);
    // --> add debug variable analogA0
    Serial.print("A0 = ");
    Serial.println(analogA0);
    delay(50);
    j++;
    // --> add debug variable j
}
