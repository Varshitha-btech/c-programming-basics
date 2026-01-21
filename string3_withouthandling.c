#include<stdio.h>
main()
{
	char s1[50],s2[50];
	int i,j,k;
	printf("enter string1: ");
	gets(s1);
	printf("enter string2: ");
	gets(s2);
	for(i=0;s1[i]!='\0';
	  i++);
	for(j=0;k=i;s2[j]!= '\0',j++,k++)
	     s1[k]=s2[j];
	     s1[k]='\0';
	     printf("string1=%s\n",s1);
	     printf("string2=%s\n",s2);
	
}
