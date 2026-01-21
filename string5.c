#include<stdio.h>
#include<string.h>
main()
{
	char s1[50];
	printf("enter a string 1: ");
	gets(s1);
	strrev(s1);
	printf("Reverse of string =%s",s1);
}
