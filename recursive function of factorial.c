#include<stdio.h>
int factorial(int);
main()
{ int n,r;
printf("enter a number");
scanf("%d",&n);
   r=factorial(n);
   printf("factorial of %d is %d",n,r);
}
int factorial (int num)
{
	if (num==0||num==1)
	return(1);
	else 
	return num*factorial(num-1);
}




