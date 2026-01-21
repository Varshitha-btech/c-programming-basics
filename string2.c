#include<stdio.h>
#include<string.h>
main()
{
	char s1[50],s2[50];
	printf("enter a string1: ");
	gets(s1);
	printf("enter a string2: ");
	gets(s2);
	strcpy(s1,s2);
	printf(" copied string=%s\n",s1);
	printf("string 2=%s\n",s2);
}
