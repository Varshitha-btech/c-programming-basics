#include<stdio.h>
main()
{
	char ch;
	printf("enter any character ");
	scanf("%c",&ch);
	if (ch>='A'&&ch<='Z')
	printf("%c is an uppercase Alaphabet.\n",ch);
	else if(ch>='a'&&ch<='z')
	printf("%c is an lowercase Alaphabet.\n",ch);
	else if(ch>='0'&&ch<='9')
	printf("%c is a digit.\n",ch);
	else
	printf("%c is a symbol.\n",ch);
}
