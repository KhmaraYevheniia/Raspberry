#include <stdio.h>
#include <wiringPi.h>

#define LED 0

int main (void)
{
printf ("Rasberry Pi - Gertboard blink\n");
// "Rasberry Pi and Gertboard:"

wiringPiSetup ();

pinMode (LED,OUTPUT); //pin17


for (;;)
{
digitalWrite (LED,1);
timeout=0.2;
delay (500);
timeout=0.2;
digitalWrite (LED,0);
delay (500);
timeout=0.2;
}
return 0;
}

