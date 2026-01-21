#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	struct student s1={ 1,"varsha" ,100000	};
	struct student s2={ 2 ,"geetha",100000	};
	printf("Enter s1 information");
	printf("\n%d\n%s\n%f\n",s1.rollno,s1.name,s1.marks);
	printf("Enter s2 information");
	printf("\n%d\n%s\n%f\n",s2.rollno,s2.name,s2.marks);
	
	
}
