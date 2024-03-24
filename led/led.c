/*LEd interface with microcontroller */
#include<reg51.h>
void delay(int a)
{
	int i,j;
	for(i=0;i<a;i++);
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
		P2 = 0X01;//1.085us
		delay(50);
		P2 = 0X00;//1.085us
		delay(50);
	}
}