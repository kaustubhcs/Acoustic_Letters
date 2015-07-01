void test()
{
  digitalWrite(relay_1,HIGH);
  delay(10);
  digitalWrite(relay_1,LOW);
  delay(20);

  digitalWrite(relay_2,HIGH);
  delay(10);
  digitalWrite(relay_2,LOW);
  delay(20);

  digitalWrite(relay_3,HIGH);
  delay(10);
  digitalWrite(relay_3,LOW);
  delay(20);

  digitalWrite(relay_4,HIGH);
  delay(10);
  digitalWrite(relay_4,LOW);
  delay(20);

  digitalWrite(relay_5,HIGH);
  delay(10);
  digitalWrite(relay_5,LOW);
  delay(20);

  digitalWrite(relay_6,HIGH);
  delay(10);
  digitalWrite(relay_6,LOW);
  delay(20);

  digitalWrite(relay_7,HIGH);
  delay(10);
  digitalWrite(relay_7,LOW);
  delay(20);

  digitalWrite(relay_8,HIGH);
  delay(10);
  digitalWrite(relay_8,LOW);
  delay(20);



}

void dance()
{
  int r;
  r = random(1,9);
  switch(r)
  {
  case 1:
    digitalWrite(relay_1,HIGH);
    delay(10);
    digitalWrite(relay_1,LOW);
    delay(10);
    break;

  case 2:
    digitalWrite(relay_2,HIGH);
    delay(10);
    digitalWrite(relay_2,LOW);
    delay(10);
    break;

  case 3:
    digitalWrite(relay_3,HIGH);
    delay(10);
    digitalWrite(relay_3,LOW);
    delay(10);
    break;

  case 4:
    digitalWrite(relay_4,HIGH);
    delay(10);
    digitalWrite(relay_4,LOW);
    delay(10);
    break;

  case 5:
    digitalWrite(relay_5,HIGH);
    delay(10);
    digitalWrite(relay_5,LOW);
    delay(10);
    break;

  case 6:
    digitalWrite(relay_6,HIGH);
    delay(10);
    digitalWrite(relay_6,LOW);
    delay(10);
    break;

  case 7:
    digitalWrite(relay_7,HIGH);
    delay(10);
    digitalWrite(relay_7,LOW);
    delay(10);
    break;

  case 8:
    digitalWrite(relay_8,HIGH);
    delay(10);
    digitalWrite(relay_8,LOW);
    delay(10);
    break;


  } 
}


void bluetooth_test()
{
 if (Serial.available())
{
 bluetooth.write(Serial.read()); 
}

if (bluetooth.available())
{
 Serial.write(bluetooth.read()); 
}
 
}
