#include<stdio.h>
int main()
{
	int i,m,n;
	for(m=1;m<=4;m++)
	{
		for(n=1;n<=5;n++)
		{
			i=m*n;
			printf("%d\t",i);
		}
		putchar('\n');
	}
	return 0;
}
