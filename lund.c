#include <stdio.h>
#include <wiringPi.h>

// LED Pin - wiringPi pin 0  is
// BCM_GPIO  17.-physical =11
#define     LED 1

int main (void)
{
printf  ("Raspberry PI blink\n")
;
wiringPiSetup ();
pinMode (LED,OUTPUT) ;
for (;;)
{
    digitalWrite (LED,HIGH) ;
   //  On
    delay (500);    //mS
    digitalWrite (LED,LOW) ;
    // Off
    delay (500);
}
  return 0;
}
