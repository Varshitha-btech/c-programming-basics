#include<stdio.h>
main()
{
	int num,sum=0,remainder;
	printf("enter an integer: ");
	scanf("%d",&num);
	while (num!=0)
	{
	remainder=num/10;
	sum+=remainder;
	num/=10;	
	}
	printf("sum of digits=%d\n",sum);
	
}
