int state = 0;
int flag = 0;
int waterSensor = 8;

void setup()
{
  pinMode(waterSensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(digitalRead(waterSensor));
  delay(1000);
}
