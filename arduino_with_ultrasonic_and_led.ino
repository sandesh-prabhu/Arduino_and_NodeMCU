#define trigPin 11
#define echoPin 12
#define ledPin 13
long duration;
int distance;
int safetyDistance;
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(ledPin, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
safetyDistance = distance;if (safetyDistance <= 5){
 digitalWrite(ledPin, HIGH);
}
else{
 digitalWrite(ledPin, LOW);
}
Serial.print("Distance: ");
Serial.println(distance);
}
