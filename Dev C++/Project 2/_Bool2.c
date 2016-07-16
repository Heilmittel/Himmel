#include<stdio.h>
#include<stdbool.h>
int main()
{
	float score;
	scanf("%f",&score);
	bool a,b,c;
	a=score>=60;
	b=score<=69;
	c=true;
	printf("%d\t%d\n",a,b);
	if(a&&b)
		printf("The score is C.\n");
	return 0;
}
