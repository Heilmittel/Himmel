#include <stdio.h>
int main(void)
{
	int i,a[10];
	for(i=0;i<10;)
		a[i++]=i;
//	for(i=0;i<=9;i++)
//		a[i]=i;
	for(i=0;i<10;i++)
		printf("%d\t%d\n",i,a[i]);
	return 0;
}
