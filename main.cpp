
#include <Arduino.h>
#include <ESP32_PWM.h>
#include "const.h"

double in1;
double in2;
double in3;
double in4;


void setup() {
  Serial.begin(9600);
  pinMode(OUT1, OUTPUT);
  pinMode(OUT2, OUTPUT);
  pinMode(OUT3, OUTPUT);
  pinMode(OUT4, OUTPUT);

  pinMode(IN1, INPUT);
  pinMode(IN2, INPUT);
  pinMode(IN3, INPUT);
  pinMode(IN4, INPUT);

}

void loop() {
  digitalWrite(OUT1, HIGH); 
  digitalWrite(OUT2, HIGH); 
  digitalWrite(OUT3, HIGH); 
  digitalWrite(OUT4, HIGH); 

  delay(T);         

  in1 = analogRead(IN1);
  in2 = analogRead(IN2);
  in3 = analogRead(IN3);
  in4 = analogRead(IN4);

  Serial.println("Read Values");
  Serial.print("Sensor 1: "); Serial.print(in1);
  Serial.println();
  Serial.print("Sensor 2: "); Serial.print(in2);
  Serial.println();
  Serial.print("Sensor 3: "); Serial.print(in3);
  Serial.println();
  Serial.print("Sensor 4: "); Serial.print(in4);
  Serial.println();
  Serial.println();

  digitalWrite(OUT1, LOW); 
  digitalWrite(OUT2, LOW); 
  digitalWrite(OUT3, LOW); 
  digitalWrite(OUT4, LOW); 

  delay(T);           
}