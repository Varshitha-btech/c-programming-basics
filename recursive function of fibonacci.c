#include<stdio.h>
int fibonacci(int);
main()
{
	int i,n;
	printf("Enter number of terms: \n ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  printf("%d\t",fibonacci(i));
}
int fibonacci(int n)
{
	if(n==0||n==1)
	return(n);
	else 
	  return fibonacci(n-1)+fibonacci(n-2);
}
