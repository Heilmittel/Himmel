#include<stdio.h>
int main()
{
	float score;
	scanf("%f",&score);
	_Bool a,b;
	a=score>=60;
	b=score<=69;
	printf("%d\t%d\n",a,b);
	if(a&&b)
		printf("The score is C.\n");
	return 0;
}
