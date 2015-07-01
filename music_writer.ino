

int state[9] = {
  1,1,1,1,1,1,1,1,1  };
int temp=0;

boolean go=true;

double start = millis();
double timer;
double diff;


void music_writer()
{


  while(go)
  {

    
    // BUTTON 1

    temp = digitalRead(button_1);

    if (temp != state[1])
    {
      state[1] = temp;
      timer = millis();
      diff = millis() - start;
      start = millis();
      Serial.print("delay(");
      Serial.print(diff);
      Serial.println(");");

      if (temp == 0)
      {
        Serial.println("o(1);");
      }
      else
      {   
        Serial.println("f(1);");
      } 
    }
    
    
    
    
    // BUTTON 2
    
    temp = digitalRead(button_2);

    if (temp != state[2])
    {
      state[2] = temp;
      timer = millis();
      diff = millis() - start;
      start = millis();
      Serial.print("delay(");
      Serial.print(diff);
      Serial.println(");");

      if (temp == 0)
      {
        Serial.println("o(2);");
      }
      else
      {   
        Serial.println("f(2);");
      } 
    }
    
    
    // BUTTON 3
    
    temp = digitalRead(button_3);

    if (temp != state[3])
    {
      state[3] = temp;
      timer = millis();
      diff = millis() - start;
      start = millis();
      Serial.print("delay(");
      Serial.print(diff);
      Serial.println(");");

      if (temp == 0)
      {
        Serial.println("o(3);");
      }
      else
      {   
        Serial.println("f(3);");
      } 
    }

    // BUTTON 4
    
    temp = digitalRead(button_4);

    if (temp != state[4])
    {
      state[2] = temp;
      timer = millis();
      diff = millis() - start;
      start = millis();
      Serial.print("delay(");
      Serial.print(diff);
      Serial.println(");");

      if (temp == 0)
      {
        Serial.println("o(4);");
      }
      else
      {   
        Serial.println("f(4);");
      } 
    }

    // BUTTON 5
    
    temp = digitalRead(button_5);

    if (temp != state[5])
    {
      state[2] = temp;
      timer = millis();
      diff = millis() - start;
      start = millis();
      Serial.print("delay(");
      Serial.print(diff);
      Serial.println(");");

      if (temp == 0)
      {
        Serial.println("o(5);");
      }
      else
      {   
        Serial.println("f(5);");
      } 
    }

    // BUTTON 6
    
    temp = digitalRead(button_6);

    if (temp != state[6])
    {
      state[2] = temp;
      timer = millis();
      diff = millis() - start;
      start = millis();
      Serial.print("delay(");
      Serial.print(diff);
      Serial.println(");");

      if (temp == 0)
      {
        Serial.println("o(6);");
      }
      else
      {   
        Serial.println("f(6);");
      } 
    }

    // BUTTON 7
    
    temp = digitalRead(button_7);

    if (temp != state[7])
    {
      state[2] = temp;
      timer = millis();
      diff = millis() - start;
      start = millis();
      Serial.print("delay(");
      Serial.print(diff);
      Serial.println(");");

      if (temp == 0)
      {
        Serial.println("o(7);");
      }
      else
      {   
        Serial.println("f(7);");
      } 
    }

    // BUTTON 8
    
    temp = digitalRead(button_8);

    if (temp != state[8])
    {
      state[2] = temp;
      timer = millis();
      diff = millis() - start;
      start = millis();
      Serial.print("delay(");
      Serial.print(diff);
      Serial.println(");");

      if (temp == 0)
      {
        Serial.println("o(8);");
      }
      else
      {   
        Serial.println("f(8);");
      } 
    }
    
    
    
    
    
    
    
    
    
    
  }
}



