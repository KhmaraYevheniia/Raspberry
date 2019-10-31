#include<stdio.h>
#include<wiringPi.h>

int main (void){
printf("Rasp Pi blink/n");

if (wiringPiSetup() == -1) return 1;
pinMode(23, OUTPUT);


digitalWrite(23, 1);
//delay(500);
//digitalWrite(0, 0);
//delay(500);

return 0;
}
