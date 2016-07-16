#include<stdio.h>
#include<string.h>
int main()
{
	char a[40]="Hello,world!",b[]="My name is WangCong!";
	puts(a);
	puts(b);
	strcat(a,b);
	puts(a);
	putchar('\n');
	char c[5]={'a','b','c','d','e'},d[5]={'q','w','e','r','t'};
	puts(c);
	puts(d);
	int e,f;
	e=sizeof(c);
	strcat(c,d);
	puts(c);
	puts(d);
	f=sizeof(c);
	printf("%d\t%d\t%s",e,f,c);
	return 0;
}
