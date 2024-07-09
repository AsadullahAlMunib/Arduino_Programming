//Simulation Link: https://www.tinkercad.com/things/9EtvtPHstmo-project-2?sharecode=UMaCA1z6Q8y5f99PooqijKNFmhD-FrU0FFp04axcy1Y

int red = 7;
int green = 12;
int yellow = 13;

void setup() {
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
}

void loop() {
    digitalWrite(red, HIGH);
    delay(10000); // Wait for 10 second(s)
    digitalWrite(red, LOW);
    delay(500); // Wait for 0.5 second(s)

    digitalWrite(green, HIGH);
    delay(10000); // Wait for 10 second(s)
    digitalWrite(green, LOW);
    delay(500); // Wait for 0.5 second(s)

    digitalWrite(yellow, HIGH);
    delay(10000); // Wait for 10 second(s)
    digitalWrite(yellow, LOW);
    delay(500); // Wait for 0.5 second(s)
}
