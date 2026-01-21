#include<stdio.h>

struct student
{
	int snumber;
	char sname[20];
	float spercentage;
};
 int main()
 { 
     struct student s1;
     
     	s1.snumber = 106;
     	s1.sname  ="varsha"; 
     	s1.spercentage=95;
     	printf("enter s1 details:\n");
     	printf("%d\t %s\t %f\t", s1.snumber,s1.sname,s1.spercentage);
	 }
