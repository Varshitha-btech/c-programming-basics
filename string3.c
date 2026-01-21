#include<stdio.h>
#include<stdio.h>
main()
{
	char s1[50],s2[50];
	printf("Enter a string1: ");
	gets(s1);
	printf("Enter a string2: ");
	gets(s2);
	strcat(s1,s2);
	printf("string 1=%s\n",s1);
	printf("string 2 =%s\n",s2);
}
