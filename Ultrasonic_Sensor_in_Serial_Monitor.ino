//Simulation Link: https://www.tinkercad.com/things/1PQTNU09wrW-project-4-ultrasonic-sensor?sharecode=ywV_ZtewxYXlXie5PAvWaW35lI48w2PH7XbGr8N_spM

const int trigPin = 7;
const int echoPin = 6;

long duration;
float distance_cm;
float distance_Inch;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  distance_cm = duration*0.034/2;
  Serial.print(distance_cm);
  Serial.println(" cm");
  
  distance_Inch = duration*0.0133/2;
  Serial.print(distance_Inch);
  Serial.println(" Inch");
  
  delay(250);
}
