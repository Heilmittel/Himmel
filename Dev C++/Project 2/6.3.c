#include<stdio.h>
int main()
{
	int a[10],i,j,t;
	printf("Enter ten numbers :\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(j=0;j<9;j++)
	{
		for(i=0;i<9-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];a[i]=a[i+1];a[i+1]=t;
			}
		}
	}
	printf("\nThe sorted numbers :\n");
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	return 0;
} 
