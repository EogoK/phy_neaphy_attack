#include <SoftwareSerial.h>
SoftwareSerial softSerial(2,3);

void setup(){
    softSerial.begin(38400);
    Serial.begin(9600);
}

void loop(){
    if(softSerial.available()){
      Serial.println(softSerial.read(), DEC);
    }
}
