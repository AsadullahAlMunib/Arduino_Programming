//Simulation Link: https://www.tinkercad.com/things/9gk5LzJxw1R-hw-02?sharecode=aEn7UnBIqnXBVUDwBZCgGtNMOzQ3nYSqFXzoGff3ixU

#include <Adafruit_LiquidCrystal.h>

const int trigPin = 6, echoPin = 7;
long time;
int cm, inch;
Adafruit_LiquidCrystal lcd(0);

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    lcd.setBacklight(1);
    lcd.begin(16,2);
    lcd.print("LCD & Ultrasonic");
    lcd.setCursor(4,1);
    lcd.print("cm &    inch");
}

void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    time = pulseIn(echoPin, HIGH);
    cm = time*0.0343/2;
    inch = time*0.0133/2;

    lcd.setCursor(0,1);
    lcd.print(cm);
    if(cm<10) {
        lcd.setCursor(1,1);
        lcd.print(" ");
    }
    if(cm<100) {
        lcd.setCursor(2,1);
        lcd.print(" ");
    }
    
    lcd.setCursor(9,1);
    lcd.print(inch);
    if(inch<10) {
        lcd.setCursor(10,1);
        lcd.print(" ");
    }
    if(inch<100) {
        lcd.setCursor(11,1);
        lcd.print(" ");
    }
}
