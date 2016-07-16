#include<stdio.h>
int main()
{
	int a[40]={1,1},i;
	for(i=2;i<40;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<40;i++)
	{
		//if(i%5==0)putchar('\n');
		printf("%11d",a[i]);
		if((i+1)%5==0)putchar('\n');
	}
	//putchar('\n');
	return 0;
}
