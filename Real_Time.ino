void real_time()
{
 if (digitalRead(button_1) == 0)
{
 digitalWrite(relay_1,HIGH);
} 
else
{
 digitalWrite(relay_1,LOW);  
}

 if (digitalRead(button_2) == 0)
{
 digitalWrite(relay_2,HIGH);
} 
else
{
 digitalWrite(relay_2,LOW);  
}

 if (digitalRead(button_3) == 0)
{
 digitalWrite(relay_3,HIGH);
} 
else
{
 digitalWrite(relay_3,LOW);  
}

 if (digitalRead(button_4) == 0)
{
 digitalWrite(relay_4,HIGH);
} 
else
{
 digitalWrite(relay_4,LOW);  
}

 if (digitalRead(button_5) == 0)
{
 digitalWrite(relay_5,HIGH);
} 

else
{
 digitalWrite(relay_5,LOW);  
}

 if (digitalRead(button_6) == 0)
{
 digitalWrite(relay_6,HIGH);
} 
else
{
 digitalWrite(relay_6,LOW);  
}

 if (digitalRead(button_7) == 0)
{
 digitalWrite(relay_7,HIGH);
 delay(40);
 digitalWrite(relay_7,LOW);  
 delay(40);
} 
else
{
 digitalWrite(relay_1,LOW);  
}

 if (digitalRead(button_8) == 0)
{
 digitalWrite(relay_8,HIGH);
} 
else
{
 digitalWrite(relay_8,LOW);  
}


}
