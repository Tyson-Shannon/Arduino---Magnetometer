//sensor
int sensorPin = 2; //define analog pin 2
int value = 0; 
//laser
int laserPin = 13;

void setup() {
  //sensor
	Serial.begin(9600); 

  //laser
  pinMode(laserPin, OUTPUT);  // Define the digital output interface pin 13 
} 

void loop() {
  //sensor
	value = analogRead(sensorPin);
	Serial.println(value, DEC); // light intensity
								// high values for bright environment
								// low values for dark environment
  
  //laser
  digitalWrite(laserPin, HIGH); // Turn on the laser head
	delay(1000); // wait for one second
}

