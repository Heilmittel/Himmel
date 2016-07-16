#include<stdio.h>
int main()
{
	int year,leap;
	printf("Enter the year: ");
	scanf("%d",&year);
	if(year%4!=0)
		leap=0;
	else
		if(year%100!=0)
			leap=1;
		else
			if(year%400!=0)
				leap=0;
			else
				leap=1;
	//printf("%d\n",leap);
	leap==1?printf("%d is a leap year.",year):printf("%d is not a leap year.",year);
	putchar('\n');
	return 0;
	
}
