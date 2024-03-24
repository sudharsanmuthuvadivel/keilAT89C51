/*Interface 2 simple motor with AT89c51 MC */

#include<reg51.h>

void delay(int a)
{
	int i,j;
	for(i=0; i<a;i++)
	{
		for(j=0;j<250;j++)
		{
		}
	}
}

void main()
{
	while(1)
	{
		P2=0x09;
		delay(5000);
		P2=0x06;
		delay(5000);
	}
}