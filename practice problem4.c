#include<stdio.h>
main()
{
	float temp;
	printf("enter the temperature in celsius:");
	scanf("%f",&temp);
	if (temp<=0)
	printf("the form of water is ICE.\n");
	else if(temp>0&&temp<100)
	printf("the form of water is LIQUID WATER.\n");
	else
	printf("the form of water is STEAM.\n");
	
}
