/*seven segment display (common anaod) interface with AT89c51 */
#include<reg51.h>
void delay(int a)
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<1000;j++)
		{
		}
	}
}

void main()
{
	while (1)
	{
		P2=0xC0;//0
		delay(100);
		P2=0xF9;//1
		delay(100);
		P2=0xA4;//2
		delay(100);
		P2=0xB0;//3
		delay(100);
		P2=0x99;//4
		delay(100);
		P2=0x92;//5
		delay(100);
		P2=0x82;//6
		delay(100);
		P2=0xF8;//7
		delay(100);
		P2=0x80;//8
		delay(100);
		P2=0x98;//9
		delay(100);
	}
}