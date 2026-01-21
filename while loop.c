#include<stdio.h>
main()
{
	int num,sum=0,r=0;
	printf("enter any number");
	scanf("%d",&num);
	while(num>0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("sum of individual digits of a number=%d",sum);
}

