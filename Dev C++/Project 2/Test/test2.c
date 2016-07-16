#include<stdio.h>
int main()
{
	/*float a[5]={1.0,2.2,3.44};
	for(int i=0;i<5;i++)
		printf("%d\t%f\n",&a[i],a[i]);
	putchar('\n');
	for(int i=0;i<5;i++)
		printf("%d\t%f\n",(a+i),*(a+i));
	putchar('\n');*/
	/*int *pb,b[10]={0,1,2,3,4,5,6,7,8,9};
	pb=b;
	printf("%d\t%d\t%d\t%d\t",pb,pb+1,pb[0],b[1]);
	*/
	int *pe,e[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	//pe=e;
	//printf("%d\t%d\t%d\t%d\t",*(e[1]+1),*(*(e+1)+1),&e[1][1],e[1][1]);
	//putchar('\n');
	//printf("%d\t%d\t%d\t",e[1],e+1,sizeof(e[0]));
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("e[%d][%d]\t\t%d\t%d\n",i,j,e[i][j],&e[i][j]);
		putchar('\n');
	}
	return 0;
}
