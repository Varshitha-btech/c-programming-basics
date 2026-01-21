#include<stdio.h>
void sum();
main()
{
sum();
printf("execution completed\n");	
}
void sum()
{ 
 int a,b;
 printf("enter a,b values");
 scanf("%d %d",&a,&b);
 printf("Addition=%d\n",(a+b));
}
