#include<IRremote.h>

int RECV_PIN = 11;
int s;

IRrecv irrecv(RECV_PIN);
decode_results results;
void setup() {
    Serial.begin(9600);
    irrecv.enableIRIn();
    Serial.println("Enabled IR in");
     // Start the receiver
    }
void loop(){
    if(irrecv.decode(&results))
    {
        S=results.value,HEX;
        Serial.println(s);
        irrecv.resume();
    }
    delay(10);
}




second code 


const int pirPin = 9;
const int motorPin = 2;
int switchState = 0;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(motorPin, OUTPUT);
  pinMode(pirPin, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  switchState = digitalRead(pirPin);




  
  if (switchState == HIGH) {
    digitalWrite(motorPin, HIGH);
  }
  else {
    digitalWrite(motorPin, LOW);
  }
}






