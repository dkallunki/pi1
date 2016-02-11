// blinkphys.c
#include <wiringPi.h>
int main (void)
{
	wiringPiSetupGpio();
	pinMode (17, OUTPUT);
	pinMode(22,OUTPUT);
	int i=0;
	for(i=0; i < 10; i++)
{
	digitalWrite(17, HIGH);
	delay(300);
	digitalWrite(22, HIGH);
	delay(500);

	digitalWrite(17, LOW);
	delay(300);
	digitalWrite(22, LOW);
	delay(500);
}
return 0;
}// end of main
