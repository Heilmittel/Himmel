#include<stdio.h>
int main()
{
	int i,a[10]={0,1,2,3,4,5,6,7,8,9};
	for(i=0;i<=9;i++)
	{
		printf("%d\t",*(a+i));
	}
	putchar('\n');
	i=sizeof(int *);
	printf("%d",i);
	return 0;
}
