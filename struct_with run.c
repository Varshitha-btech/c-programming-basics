#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float salary;
};
void main()
{
	struct employee e1,e2;
	printf("Enter e1 information");
	scanf("%d %s %f",&e1.id,e1.name,&e1.salary);
	printf("Enter e2 information");
	scanf("%d %s %f",&e2.id,e2.name,&e2.salary);
}
