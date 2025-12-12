# include <Arduino.h>

int sensorPin = A1;   // select the input pin for the potentiometer
int ledPin = 17;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT and initialize LOW
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  
  Serial.begin(115200);
}

void loop() {

  //unsigned long value = pulseIn(sensorPin, LOW);
  // printf ("%lu\n", duration);
  //delay (500);
  int value = analogRead(sensorPin); // Read analog value
  Serial.println(value); // Send data to PC
  delayMicroseconds(52); // Adjust sampling rate
  if (value >= 3500){
    delay(1000);
    digitalWrite(ledPin, HIGH);
    delay(5000);
    digitalWrite(ledPin, LOW);
    delay(5000);
  }

}

