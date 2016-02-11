// blinkphys.c
#include <wiringPi.h>
int main (void)
{
	wiringPiSetupPhys();
	pinMode (11, OUTPUT);
	pinMode(15,OUTPUT);
	int i=0;
	for(i=0; i < 10; i++)
{
	digitalWrite(11, HIGH);
	delay(300);

	digitalWrite(15, HIGH);
	delay(100);
	digitalWrite(15, LOW);
	delay(100);

	digitalWrite(11, LOW);
	delay(300);
	digitalWrite(15,HIGH);
	delay(100);
	digitalWrite(15, LOW);
	delay(100);

}
return 0;
}// end of main
