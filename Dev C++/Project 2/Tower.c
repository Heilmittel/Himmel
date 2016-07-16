#include<stdio.h>
#include<math.h>
int main()
{
	int h;
	float x,y,d;
	printf("请输入一个坐标：");
	scanf("%f%f",&x,&y);
	x=fabs(x);
	y=fabs(y);
	d=(x-2)*(x-2)+(y-2)*(y-2);
	d>1?h=10:(h=0);
	printf("该点高度为:%d\n",h);
	return 0;
}
