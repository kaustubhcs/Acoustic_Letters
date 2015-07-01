#define ldr_activator A5
#define ldr_1 A0
#define ldr_2 A1
#define ldr_3 A2
#define ldr_4 A3
#define ldr_5 A4

#define button_1 13
#define button_2 A0
#define button_3 A1
#define button_4 A2
#define button_5 A3
#define button_6 10
#define button_7 A4
#define button_8 A5



// RELAYS
#define relay_1 4
#define relay_2 2
#define relay_3 12
#define relay_4 3
#define relay_5 9
#define relay_6 8
#define relay_7 7
#define relay_8 6

#define buzzer 11

#include <SoftwareSerial.h>

SoftwareSerial bluetooth(10, 5); // RX, TX

int light = 0;
int dataset=1;



/*
0r = red
 o = orange
 p = purple
 b = black
 w = white 
 g = green
 y = yellow
 c = cfl
 n = null
 d = delay
 e = end
 */

char ka_1[1000] = "d1000 r80 p60";
char ka_2[1000] = "";
char ka_3[1000] = "";
char ka_4[1000] = "";
char ka_5[1000] = "";
char ka_6[1000] = "";


void setup()
{
  Serial.begin(9600);
  bluetooth.begin(9600);
  initialize();
}

void loop()
{
   //  dance();
  real_time();
//  Serial.print(digitalRead(button_2));

//kraddy();
//music_writer();
}







