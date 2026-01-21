#include<stdio.h>
#include<stdio.h>
main()
{
	char s1[50],s2[50];
	int flag;
	printf("Enter a string 1: ");
	gets(s1);
	printf("enter a string 2: ");
	gets(s2);
	flag=strcmp(s1,s2);
	if (flag!=0)
	printf("strings are not equal\n");
	else
	printf("strings are equal\n");
}
