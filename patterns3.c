#include<stdio.h>
main()
{
   int i,j,space,n=5;
   for(i=1;i<=n;i++)
   {
   	for(space=i;space<n;space++)
   	printf(" ");
   	for(j=1;j<=i;j++)
   	printf("*");
   	printf("\n");
    } 	
}
