#include<stdio.h>
main()
{ 
   char s1[50],s2[50];
   int len,j;
   printf("enter string1: ");
   gets(s1);
   for(len=0;s1[len]!='\0';
            len++);
            s2[len]='\0';
            len=len-1;
            for(j=0;s2[j]!='\0';j++)
            s2[len-j]=s1[j];
            printf("Reverse of string=%s\n",s2);
}
