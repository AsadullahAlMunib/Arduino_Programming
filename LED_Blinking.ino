//Simulation Link: https://www.tinkercad.com/things/iY07ieiBYIj-project-1?sharecode=rGB6JBWvZniov8bzAoITMDSAvXGUt-9wAdOxk9u_jdA

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
