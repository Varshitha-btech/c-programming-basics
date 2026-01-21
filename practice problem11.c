#include<stdio.h>
main()
{
	char op;
	printf("enter an operator: ");
	scanf("%c",&op);
	switch(op)
	{
		//Arithmetic operators
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			printf("%c is an Arithmetic operator",op);
			break;
		//Realational operators(single character version)
		case '<':
		case '>':
		case '=':
			printf("could be a relational OR assignment operator.\n");
			break;
		//Logical operator(single-charactered symbols)
		case '!':
		    printf("%c is a Logical NOT operator.\n",op);
		    break;
		default:
			printf("%c is a symbol or unknown operator.\n",op);
	}
}
