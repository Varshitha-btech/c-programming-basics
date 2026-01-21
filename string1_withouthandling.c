#include<stdio.h>
main()
{
	char s1[50];
	int len;
	printf("enter string 1: ");
	gets(s1);
	for(len=0;s1[len]!='\0';
	            len++);
	            printf("lenght of a string =%d",len);
}
