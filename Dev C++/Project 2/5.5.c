#include<stdio.h>
int main()
{
	for(int i=100;i<=200;i++)
	{
		if(i%3==0)
			continue;
		else
			printf("%d\t",i);
	}
	putchar('\n');
	return 0;
}
