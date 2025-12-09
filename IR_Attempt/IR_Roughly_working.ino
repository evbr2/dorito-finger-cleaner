# include <Arduino.h>


int drivePin = A5;
int driveFreq = 38000;
int pwmResolution = 1;
int sensorPin = A1;   // select the input pin for the potentiometer
int ledPin = 14;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT and initialize LOW
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  //setting up pwm channel
  ledcAttach(drivePin, driveFreq, pwmResolution); //check it returns true
  ledcWrite(drivePin, 0.5); // check if true
  Serial.begin(115200);
}

void loop() {

  //unsigned long value = pulseIn(sensorPin, LOW);
  // printf ("%lu\n", duration);
  //delay (500);
  int value = analogRead(sensorPin); // Read analog value
  Serial.println(value); // Send data to PC
  delayMicroseconds(52); // Adjust sampling rate
  if (value >= 450){
    digitalWrite(ledPin, HIGH);
  }
  else {digitalWrite(ledPin, LOW);}


}

