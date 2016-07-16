#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<=9;i++)
		a[i]=i;
	for(i=9;i>=0;i--)
		printf("%d\t",a[i]);
	putchar('\n');
	return 0;
}
