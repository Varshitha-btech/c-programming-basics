#include<stdio.h>
struct student
{ 
	int no;
	char name[20];
	struct DOB
	{
		int day,month,year;
	}d;
};
 int main()
{
	struct student s1={25,"varsha",{9, 4 ,2008} };
	printf("Enter the details");
	printf("\n %d \n %s\n %d %d %d ",s1.no,s1.name,s1.d.day,s1.d.month,s1.d.year);
   
	
}

