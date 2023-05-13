#include <SoftwareSerial.h>

SoftwareSerial esp8266(10, 11);

void setup() {
  pinMode(2, INPUT); // Current Sensor Module
  pinMode(3, OUTPUT); // Relay Module
  pinMode(4, OUTPUT); // LED

  Serial.begin(9600);
  esp8266.begin(9600);
  delay(1000);
  
  connectWifi();
}

void loop() {
  int sensorValue = digitalRead(2);

  if (sensorValue == HIGH) {
    reroutePower();
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
  }
}

void connectWifi() {
  esp8266.println("AT");
  delay(1000);
  
  esp8266.println("AT+CWJAP=\"Panic At The Cisco\",\"karatasi001\"");
  delay(3000);
}

void reroutePower() {
  esp8266.println("AT+CIPMUX=0");
  delay(1000);

  esp8266.println("AT+CIPSTART=\"TCP\",\"IP ADDRESS\",PORT");
  delay(2000);

  esp8266.println("AT+CIPSEND=12");
  delay(1000);

  esp8266.println("POWER ON");
  delay(1000);

  esp8266.println("AT+CIPCLOSE");
  delay(1000);
}
