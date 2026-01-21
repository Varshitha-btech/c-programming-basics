#include<stdio.h>
main()
{
	int month;
	printf("enter the month number from (1-12): ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 12:
		case 1:
		case 2:
			printf("season:winter\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("season:summer\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("season:rainy\n");
			break;
		case 9:
		case 10:
		case 11:
			printf("season:autumn\n");
			break;
	    default:
		    printf("Invalid month number! please enter between 1 to 12.\n");
	}
}
