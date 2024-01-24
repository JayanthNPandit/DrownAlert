// int state = 0;
// int flag = 0;
int waterSensor = 6;
int tempSensor = 7;
int alarm = 8;

float temp;


void setup()
{
  pinMode(waterSensor, INPUT);
  pinMode(tempSensor, INPUT);
  pinMode(alarm, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(digitalRead(waterSensor));
  delay(1000);
  temp = analogRead(tempSensor);
  float tempFahrenheit = temp * 0.48828125;
  Serial.print(tempFahrenheit);
  delay(1000);
  if(waterSensor > 0 || tempFahrenheit > 75)
  {
    tone(alarm, 1200);
  }
}
