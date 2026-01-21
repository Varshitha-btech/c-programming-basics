#include<stdio.h>
main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		ch=ch-32;
		printf("uppercase letter=%c",ch);
	}
	printf("end of program");
}
