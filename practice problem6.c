#include<stdio.h>
main()
{
	double a,b,c,d,root1,root2,realpart,imagpart;
	printf("enter the coefficients of a,b,c ");
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	//condition for real and different roots
	if(d>0)
	{
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("root1=root2=%.2lf;" ,root1,root2);
	}
	else if(d==0)
	{
		root1=root2=-b/(2*a);
		printf("root1=root2=%.2lf",root1);
	}
	//if roots are not real
	else
	{
		realpart=-b/(2*a);
		imagpart=sqrt(d)/(2*a);
		printf("root1=%2lf+%lfi and root2=%2f-%2fi",realpart,imagpart,realpart,imagpart);
	}
}
