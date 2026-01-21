#include<stdio.h>
main()
{
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
			printf("given number is vowel");
			break;
			case 'e':
				printf("given number is vowel");
				break;
				case 'i':
					printf("given number is vowel");
					break;
					case 'o':
						printf("given number is vowel");
						break;
						case 'u':
							printf("given number is vowel");
							break;
							default:
								printf("given number is consonant");
								break;
	}
}
