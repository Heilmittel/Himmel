#include<stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},b[3]={1,2,3},*pi;
	pi=&pi;
	printf("%d\t%d\t",a[0],&a[0]);
	putchar('\n');
	printf("%d\t%d\t",b,&b);
	putchar('\n');
	printf("%d\t%d\t%d\t",pi,&pi,*pi);
	putchar('\n');
	for(int i=0;i<3;i++)
		printf("%d\t",b[i]);
	return 0;
}
