/*LCD display interfacing with AT89C51 MC */
#include<reg51.h>
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;

void lcd_init();
void lcd_cmd(unsigned char ch);
void lcd_data(unsigned char ch);
void lcd_string(char *str);
void delay(int a);

void main()
{
	lcd_init();
	lcd_string("Hi Sudharsan");
	lcd_cmd(0xC0);//2nd line 1st position.
	lcd_string("Welcome.");
	delay(1000);
	lcd_cmd(0x01);//clear display.
	lcd_string("Welcome Home");
	while(1)
	{
	}
}
void lcd_init()
{
	lcd_cmd(0x38);//8bit 2line.
	lcd_cmd(0x0C);//display ON cursor off.
	lcd_cmd(0x01);//clear display.
	lcd_cmd(0x80);//1st line 1st position.
}
void lcd_cmd(unsigned char ch)
{
	P2=ch;
	rs=0;
	rw=0;
	en=1;
	delay(10);
	en=0;
}
void lcd_string(char *str)
{
	int i=0;
	while (str[i] !='\0')
	{
		lcd_data(str[i]);
		i++;
	}
}
void lcd_data(unsigned char ch)
{
	P2=ch;
	rs=1;
	rw=0;
	en=1;
	delay(10);
	en=0;
}
void delay(int a)
{
	int i,j;
	for(i=0;i<a;i++)//10*250*1.058usec.
	{
		for(j=0;j<250;j++)
		{
		}
	}
}