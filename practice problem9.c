#include<stdio.h>
main()
{
	float num1,num2,result;
	char op;
	printf("enter first number: ");
	scanf("%f",&num1);
	printf("enter an operator(+,-,*,/): ");
	scanf(" %c",&op);
	printf("enter second number: ");
	scanf("%f",&num2);
	switch(op)
	{
		case '+':
			result=num1+num2;
			printf("result=%.2f\n",result);
			break;
		case '-':
			result=num1-num2;
			printf("result=%.2f\n",result);
			break;
		case '*':
			result=num1*num2;
			printf("result=%.2f\n",result);
			break;
		case '/':
			if(num2!=0)
		    result=num1/num2;
		    else
		    {
		    	printf("error!division by zero is not allowed.\n");
			}
		    printf("result=%.2f\n",result);
		    break;
		default:
		    printf("Invalid operator!please use +,-,*,or/.\n");
			
	}
}
