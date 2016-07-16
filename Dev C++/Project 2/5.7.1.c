#include<stdio.h>
#include<math.h>
int main()
{
	double sum=0.0,a=1.0,b=1.0;
	int c=1;
	//a为单项的值，b为分母，c为符号.
	for(;fabs(a)>=1e-8;)
	{
		a=1/b*c;
		sum=sum+a;
		c=(-1)*c;
		b=b+2;
	} 
	printf("πis %5.8f\n",4*sum);
	return 0;
}
