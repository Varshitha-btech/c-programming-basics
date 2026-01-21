#include<stdio.h>
main()
{
	int i,j, space,n=5;
	for(i=5;i>=1;i--)
	{
		for(space=i;space<n;space++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
}
