int h2O = A0;

void setup ()
{
  pinMode(h2O, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int i = analogRead(h2O);
  Serial.println(i);
  delay(1000);
}
