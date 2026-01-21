#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a,b values");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("After swap a=%d,b=%d\n",a,b);
	
}
  int swap (int*a,int*b)
  {
  	int temp=*a;
  	*a=*b;
  	*b=temp;
  	printf("swap a=%d,b=%d\n",a,b);
  }
