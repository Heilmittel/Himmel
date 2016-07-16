#include<stdio.h>
int main()
{
	int sum=0,i=1,n;
	printf("Enter the number of 1+2+...+n :");
	scanf("%d",&n);
	//printf("%o%u%x\n",sum,sum,sum);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum = %d",sum);
	return 0;
}
