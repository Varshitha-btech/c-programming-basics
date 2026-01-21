#include<stdio.h>
int swap(int ,int);
main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("After swap a=%d,b=%d\n",a,b);
	
}


int swap (int a,int b);
{ 
       int temp;
      temp=a;
       a=b;
       b=temp;
      printf("swap a=%d,b=%d\n",a,b);
  }
