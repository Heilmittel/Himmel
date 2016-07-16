#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	a=sizeof(short);
	b=sizeof(int) ;
	c=sizeof(long);
	d=sizeof(long long);
	e=sizeof(float);
	f=sizeof(double);
	g=sizeof(long double);
	h=sizeof(char);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f,g,h);
	return 0;
	
}
