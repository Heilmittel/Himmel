#include<stdio.h>
int main()
{
	int sign=1;
	double sum =1.0,deno=2.0,term;
	while(deno<=11)
	{
		sign=-sign;
		term=sign/deno;
		sum=sum+term;
		deno=deno+1;
	}
	printf("sum is %f\n",sum);
	return 0;
}
