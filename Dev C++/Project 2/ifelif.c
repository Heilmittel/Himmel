#include<stdio.h>
int main()
{
	double number,cost;
	puts("Enter a number : ");
	scanf("%lf",&number);
	if(number>500)
	{
		if(number>700)
			cost=0.20;
		else
			cost=0.15;
	}
	else
	{
		if(number>300)
			cost=0.10;
		else
		{
			if(number>100)
				cost=0.05;
			else
				cost=0;
		}
	}
	printf("cost is %g",cost);
	return 0;
}
