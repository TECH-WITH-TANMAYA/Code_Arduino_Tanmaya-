
int sensorPin= A0;
int light= 2;

int sensorValue;
int led;

void setup()
{
  pinMode(light,OUTPUT);
  pinMode(sensorPin,INPUT);
}

void loop()
{
  sensorValue = analogRead(sensorPin);  
  
// if it is dark then switch on the light else let it remain off 

  if (sensorValue <100)
  digitalWrite(light,HIGH);

  else
  digitalWrite(light,LOW);
}
