#include<stdio.h>
int main()
{
	int sum=0,i=1,n;
	printf("Enter the number of 1+2+...+n :");
	scanf("%d",&n);
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=n);
	printf("sum = %d",sum);
	return 0;
}
