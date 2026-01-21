#include<stdio.h>
struct student 
{
	int rollno;
	char name[20];
	float marks[2];
};
int main()
{
  struct student s1;
  int i;
  printf("Enter s1 rollno");
  scanf("%d",&s1.rollno);
  printf("Enter s1 name");
  scanf("%s",s1.name);
 for(i=0;i<2;i++)
 {
 	printf("enter s1 marks");
 	scanf("%f ",&s1.marks[i]);
	 }
	 for(i=0;i<2;i++)
	 {
	 	printf("%f\n",s1.marks[i]);
		 }
		 return 0;	
}
