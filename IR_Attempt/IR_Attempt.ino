/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

*/

int sensorPin = A1;   // select the input pin for the potentiometer
int ledPin = 14;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  //pinMode(sensorPin, INPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(115200);
}

void loop() {

  // unsigned long duration = pulseIn(sensorPin, HIGH, 100);
  // printf ("%lu\n", duration);
  // delay (500);

  int value = analogRead(sensorPin); // Read analog value
  Serial.println(value); // Send data to PC
  delayMicroseconds(26); // Adjust sampling rate

}

