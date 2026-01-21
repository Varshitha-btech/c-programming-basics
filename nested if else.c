#include<stdio.h>
main()
{
	int age;
	char gender;
	printf("enter age,enter gender details");
	scanf("%d%c",&age,&gender);
	if(gender=='m'||gender=='M')
	{
		if(age>=21)
		{
			printf("he is major");
		}
		else
		{
			printf("he is minor");
		}
		
		{	if(age>=18)
			{
				printf("she is major");
			}
			else
			{
				printf("she is minor");
			}
		}
	}
}
