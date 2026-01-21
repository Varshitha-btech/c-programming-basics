#include<stdio.h>
main()
{
	int n;
	char ch;
	do
	{
		printf("enter a number");
		scanf("%d",&n);
		if (n%2==0)
		{
			printf("%d is even number\n",n);
		}
		else
		{
			printf("%d is odd number\n",n);
		}
		printf("do you want to continue another number");
		scanf(" %c",&ch);
	}
	while(ch=='y');
}
