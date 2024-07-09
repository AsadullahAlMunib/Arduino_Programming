//Simulation Link: https://www.tinkercad.com/things/jeumnVDDKR9-project-3-servo?sharecode=khw5wToQb1O13pIKsR3AqIx-JcknwDZi_1Fg_qesqAg

#include <Servo.h>
Servo name;
int pos = 0;

void setup() {
  name.attach(2);
}

void loop() {
  for(pos=0; pos<=180; ++pos) {
    name.write(pos);
    delay(20);
  }
  delay(1000); //wait for 1 second 
  
  for(pos=180; pos>=0; --pos) {
    name.write(pos);
    delay(20);
  }
  delay(1000); //wait for 1 second 
}
