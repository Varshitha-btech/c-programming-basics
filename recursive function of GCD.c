#include<stdio.h>
int GCD(int ,int);
main()
{
	int a,b,r;
	printf("Enter a,b values");
	scanf("%d%d",&a,&b);
	r=GCD(a,b);
	printf("GCD of two numbers=%d\n",r);
}
int GCD(int a,int b)
{
	if(a==0)
	     return(b);
	 else if(b==0)
	    return(a);
	else 
		 return GCD(b,a%b);   
}

