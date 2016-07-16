#include<stdio.h>
int main()
{
	int max,m=0,n=0,i,j,a[3][4]={{1,5,7,3},{465,33,98,34},{0,33,676,3232}};
	max=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				m=i;
				n=j;
			}
		}
	}
	printf("max = %d\nrow = %d\ncolum = %d\n",max,m,n);
	return 0;
}

