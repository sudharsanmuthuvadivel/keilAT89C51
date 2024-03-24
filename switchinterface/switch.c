/*pullup switch interfacing with at89c51 */

#include<reg51.h>
sbit SW=P2^0;
sbit led=P3^0;

void main()
{
	led=0;
	while (1)
	{
		if(SW==0)
		{
			led=1;
		}
		else
		{
			led=0;
		}
	}
}
