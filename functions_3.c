#include<stdio.h>
void sum(int a,int b);
main()
{ 
   int a,b;
   printf("Enter a,b values");
   scanf("%d%d",&a,&b);
   sum(a,b);
   printf("execution completed\n");
   
}
void sum(int a,int b)
{
	printf("Addition=%d\n",(a+b));
}
