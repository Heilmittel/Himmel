#include<stdio.h>
int main()
{
	int a=1,b=2;
	while(b<=11)
	{
		a=a*b;
		b++;
	}
	printf("1*2~100 is %d",a);
	return 0;
}
