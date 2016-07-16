#include<stdio.h>
int main()
{
	char a[]={'C','h','i','n','a','!'};
	for(int i=0;i<7;i++)
		printf("%c",a[i]);
	putchar('\n');
	printf("%s\n",a);
	puts(a);
	puts(a);
	return 0;
}
