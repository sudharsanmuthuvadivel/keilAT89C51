/*inteface 4*3 keypad with AT89C51 MC */
#include<reg51.h>

sbit r1=P3^0;
sbit r2=P3^1;
sbit r3=P3^2;
sbit r4=P3^3;
sbit c1=P3^4;
sbit c2=P3^5;
sbit c3=P3^6;

void delay(int a)
{
	int i,j;
	for (i=0;i<a;i++)
	{
		for (j=0;j<250;j++)
		{}
		}
	}
void main()
{
	while(1)
	{
		r1=r2=r3=r4=c1=c2=c3=1;
		r1=0;
		if(c1==0)
		{
			P2=0xF9;
			delay(50);
		}
		else if (c2==0)
		{
			P2=0xA4;
			delay(50);
		}
		else if (c3==0)
		{
			P2=0xB0;
			delay(50);
		}
		r1=r2=r3=r4=c1=c2=c3=1;
		r2=0;
		if(c1==0)
		{
			P2=0x99;
			delay(50);
		}
		else if (c2==0)
		{
			P2=0x92;
			delay(50);
		}
		else if (c3==0)
		{
			P2=0x82;
			delay(50);
		}
		r1=r2=r3=r4=c1=c2=c3=1;
		r3=0;
		if(c1==0)
		{
			P2=0xF8;
			delay(50);
		}
		else if (c2==0)
		{
			P2=0x80;
			delay(50);
		}
		else if (c3==0)
		{
			P2=0x98;
			delay(50);
		}
		r1=r2=r3=r4=c1=c2=c3=1;
		r4=0;
		if(c2==0)
		{
			P2=0x00;
			delay(50);
		}
	}
}
		
		
		
		
		
		
		
		
		
		