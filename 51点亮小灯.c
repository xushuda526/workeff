#include <reg52.h>
void ys()//延时函数
{
	unsigned char x=0,y=0,z=0;//0-255
	for(x=0;x<150;x++)
		for(x=0;x<150;x++)
			for(x=0;x<150;x++);
}
void main()
{
	unsigned char temp,tt=0;
		temp=0xfe;
	while(1)
	{
		temp=0xfe;
			for(tt=0;tt<8;tt++)
			{
				p2=temp;
				ys();
				temp=(temp<<1)+0x01;
			}
	}
}
**
#include <reg52.h>
void main()
{
	while(1)
	{
		p2=0x01;//00000001
	}
}
**