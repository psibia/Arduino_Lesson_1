String str;

void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(50);
  pinMode(A0, OUTPUT);
}

void loop()
{
  if(Serial.available())
  {
    str = Serial.readString();
  }
  

  if(str == "on")
  {
    tone(A0, 500);
  }
  if(str == "off")
  {
    noTone(A0);
  }
}
