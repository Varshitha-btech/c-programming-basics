#include<stdio.h>
#include<string.h>
main()
{
	char s1[50],s2[50];
	int len1,len2;
	printf("enter a string 1: ");
	gets(s1);
	printf("enter a sring 2: ");
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2);
	printf("lenght of string 1=%d\n",len1);
	printf("lenght of string 2=%d\n",len2);
}
