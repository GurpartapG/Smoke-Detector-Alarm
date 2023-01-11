int buzzer = 10;
int smokeAO = A5;
//threshhold value
int sensorThres = 190;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(smokeAO, INPUT);
  Serial.begin(9600); //dtaa rate in bits per second
}

void loop()
{
  int analogSensor = analogRead(smokeAO);
  Serial.print("Pin AO: ");
  Serial.println(analogSensor);
  //check if it has reached the threshhold value
  if(analogSensor>sensorThres)
  {
    tone(buzzer, 1000, 200); //(pin, frequency, duration in millisecond)
  }
  else
  {
    noTone(buzzer);
  }
  delay(100);
}
