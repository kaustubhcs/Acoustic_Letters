void o (int i,int f=0,int b=0,int c=0,int g=0, int h=0, int m=0,int y=0)
{
  int a[8] = {
    i,f,b,c,g,h,m,y  };


  for (int z=0 ;  z<8 ; z++)
  {


    switch(a[z])
    {
    case 1:
      digitalWrite(relay_1,HIGH);
      break;
    case 2:
      digitalWrite(relay_2,HIGH);
      break;
    case 3:
      digitalWrite(relay_3,HIGH);
      break;
    case 4:
      digitalWrite(relay_4,HIGH);
      break;
    case 5:
      digitalWrite(relay_5,HIGH);
      break;
    case 6:
      digitalWrite(relay_6,HIGH);
      break;
    case 7:
      digitalWrite(relay_7,HIGH);
      break;
    case 8:
      digitalWrite(relay_8,HIGH);
      break;

    default :
      break;
    }

  }  
}


void f (int i,int f=0,int b=0,int c=0,int g=0, int h=0, int m=0,int y=0)
{
  int a[8] = {
    i,f,b,c,g,h,m,y  };


  for (int z=0 ;  z<8 ; z++)
  {


    switch(a[z])
    {
    case 1:
      digitalWrite(relay_1,LOW);
      break;
    case 2:
      digitalWrite(relay_2,LOW);
      break;
    case 3:
      digitalWrite(relay_3,LOW);
      break;
    case 4:
      digitalWrite(relay_4,LOW);
      break;
    case 5:
      digitalWrite(relay_5,LOW);
      break;
    case 6:
      digitalWrite(relay_6,LOW);
      break;
    case 7:
      digitalWrite(relay_7,LOW);
      break;
    case 8:
      digitalWrite(relay_8,LOW);
      break;
    }  
  }
}








