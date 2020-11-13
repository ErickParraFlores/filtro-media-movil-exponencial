float sensorPin = A0;
float Y = 0.0; 
float alpha = 0.05;
float S = Y;

void setup ()
{
  Serial.begin(9600);
}
void loop()
{
  Y = analogRead(sensorPin);
  S = (alpha*Y)+((1-alpha)*S);
  //Serial.print(Y);
  //Serial.print(",");
  Serial.println(S);
}
