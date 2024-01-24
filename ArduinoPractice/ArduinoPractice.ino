#define waterSensor 8
#define Alarm 9

void setup() {
   pinMode(waterSensor, INPUT); // The Water Sensor is an Input
   pinMode(LED, OUTPUT); // The LED is an Output
}

void loop() {
   /* The water sensor will switch LOW when water is detected.
   Get the Arduino to illuminate the LED and activate the buzzer
   when water is detected, and switch both off when no water is present */
   if( digitalRead(waterSensor) == HIGH) {
      digitalWrite(Alarm,HIGH);
   }else {
      digitalWrite(Alarm,LOW);
   }
}
