#include<stdio.h>
main()
{
	int year;
	printf("enter the year: ");
	scanf("%d",&year);

//A year is a leap year if:
//1.divisible by 4 AND
//2.it is not divisible by 100 OR it is divisible by 400
if((year%4==0&&year%100!=0)||(year%400==0))
{
	printf("%d is a leap year.\n",year);
}
else
{
	printf("%d is not a leap year.\n",year);
}
}
