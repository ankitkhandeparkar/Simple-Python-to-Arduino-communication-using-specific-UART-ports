#include <Arduino.h>

#define led 13

String command;


void setup() {
  
  // Serial.begin(9600);
  // Serial1.begin(9600);
  Serial2.begin(9600);                  // communication through UART port 2
  // Serial3.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {

    if (Serial2.available()) {
    command = Serial2.readStringUntil('\n');
    command.trim();
    if (command.equals("ONE")) {
      digitalWrite(led, HIGH);
    }
  
    else if (command.equals("ZERO")) {
      digitalWrite(led, LOW);
    }

    else{
      digitalWrite(led, LOW);
    }
    
  }

  delay(1000);

}