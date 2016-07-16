#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	//ch=(ch>='A'&&ch<='Z')?ch+32:ch;
	//printf("%c\n",ch);
	printf("%c\n",ch>='A'&&ch<='Z'?ch+32:ch);
	return 0;
}
