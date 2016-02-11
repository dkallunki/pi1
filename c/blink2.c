// blink2.c
#include <wiringPi.h>
int main (void)
{
	wiringPiSetup();
//	pinMode (13, OUTPUT);
	pinMode(17,OUTPUT);
	int i=0;
	for(i=0; i < 10; i++)
{
	digitalWrite(0, HIGH);
	delay(500);
	digitalWrite(0, LOW);
	delay(500);
}
// lED blue light
	
		
	pinMode(13,OUTPUT);
	int j=0;
	for (j=0; j < 15; j++)
{
	digitalWrite(0,HIGH);
	delay(100);
	digitalWrite(0,LOW);
	delay(100);
}
	
return 0;
}// end of main
