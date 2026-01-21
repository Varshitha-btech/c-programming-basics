#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float salary;
	
};
int main()
{
	int i;
	struct employee e[2];
	for(i=0;i<2;i++)
	{
		scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
	}
	for(i=0;i<2;i++)
	{
		printf("employee details");
		printf("\n%d\n%s\n%f ",e[i].id,e[i].name,e[i].salary);
	}
	return 0;  
}
