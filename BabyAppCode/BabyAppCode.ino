int ledPin = 13;
int state = 0;
int flag = 0;
int waterSensor = 8;

void setup()
{
  pinMode(waterSensor, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
}

void loop()
{
  while(Serial.available() > 0)
  {
    state = Serial.read();
    Serial.println("State = " + state);
    flag = 0;

    if (digitalRead(waterSensor) == HIGH)
    {
      digitalWrite(ledPin, HIGH);
      if (flag == 0)
      {
        Serial.println("Save your baby!!");
        flag = 1;
      }
    }
    else
    {
      digitalWrite(ledPin, LOW);
      if (flag == 0)
      {
        Serial.println("Your baby is fine.");
        flag = 1;
      }
    }
  } // End of While Loop
}
