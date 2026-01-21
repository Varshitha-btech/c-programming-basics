#include<stdio.h>
main()
{
	int num,i,isprime=1;
	printf("Enter an integer: ");
	scanf("%d",&num);
	if(num<=1)
{
	printf("%d is not a prime number.\n",num);
}
for(i=2;i<=num/2;i++)
{
	if(num%i==0)
	{
	  isPrime=0;
    	break;
    }
}
if(isPrime)
     printf("%d is a prime number.\n",num);
     else
     printf("%d is not a prime number.\n",num);
 }

	
	
	
		
	

}
