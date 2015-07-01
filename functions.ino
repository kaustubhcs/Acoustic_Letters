void initialize()
{


  /*
  pinMode(ldr_activator,OUTPUT);
   pinMode(ldr_1,INPUT);
   pinMode(ldr_2,INPUT);
   pinMode(ldr_3,INPUT);
   pinMode(ldr_4,INPUT);
   pinMode(ldr_5,INPUT);
   */
  pinMode(button_1,INPUT);
  pinMode(button_2,INPUT);
  pinMode(button_3,INPUT);
  pinMode(button_4,INPUT);
  pinMode(button_5,INPUT);
  pinMode(button_6,INPUT);
  pinMode(button_7,INPUT);
  pinMode(button_8,INPUT);

  digitalWrite(button_1,HIGH);
  digitalWrite(button_2,HIGH);
  digitalWrite(button_3,HIGH);
  digitalWrite(button_4,HIGH);
  digitalWrite(button_5,HIGH);
  digitalWrite(button_6,HIGH);
  digitalWrite(button_7,HIGH);
  digitalWrite(button_8,HIGH);



//  analogWrite(ldr_activator,1023);
  // RELAYS
  pinMode(relay_1,OUTPUT);
  pinMode(relay_2,OUTPUT);
  pinMode(relay_3,OUTPUT);
  pinMode(relay_4,OUTPUT);
  pinMode(relay_5,OUTPUT);
  pinMode(relay_6,OUTPUT);
  pinMode(relay_7,OUTPUT);
  pinMode(relay_8,OUTPUT);

  digitalWrite(relay_1,LOW);
  digitalWrite(relay_2,LOW);
  digitalWrite(relay_3,LOW);
  digitalWrite(relay_4,LOW);
  digitalWrite(relay_5,LOW);
  digitalWrite(relay_6,LOW);
  digitalWrite(relay_7,LOW);
  digitalWrite(relay_8,LOW);

}


