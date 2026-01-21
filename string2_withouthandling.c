#include<stdio.h>
main()
{
	char s1[50],s2[50];
	int i;
	printf("enter string 1: ");
	gets(s1);
	printf("enter string 2: ");
	gets(s2);
	for(i=0;s2[i]!= '\0';i++)
	    s1[i]=s2[i];
	    s1[i]='\0';
	    printf("string1=%s\n",s1);
	    printf("string2=%s\n",s2);
}
