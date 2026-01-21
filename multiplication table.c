#include<stdio.h>
main()
{
	int num,i;
	printf("enter a number:");
	scanf("%d", &num);
	for(i=1; i<=15; i++)
	{
		printf("%d*%d=%d\n",i,num,(1*num));
	}
}
