#include<stdio.h>
int sum();
main()
{
	int r;
	r=sum();
	printf("Addition=%d\n ",r);
	
}
int sum()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	return(a+b);
}
