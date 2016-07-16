#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}},b[3][2],m,n;
	printf("\nArray a : \n");
	for(m=0;m<2;m++)
	{
		for(n=0;n<3;n++)
		{
			printf("%d\t",a[m][n]);
			b[n][m]=a[m][n];
		}
		putchar('\n');
	}
	printf("\nArray b : \n");
	for(m=0;m<3;m++)
	{
		for(n=0;n<2;n++)
			printf("%d\t",b[m][n]);
		putchar('\n');
	}
	return 0;
}
