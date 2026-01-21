#include<stdio.h>
main()
{
	char c;
	int lv,uv;
	printf("enter a letter");
	scanf("%c",&c);
	
	//evaluates to 1 if variable is a lowercase vowel
	lv=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	
	//evaluates to 1 if variable c is a uppercase vowel
	uv=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	
	//evaluates to 1 (true) if c is a vowel
	if (lv||uv)
	printf("%c is a vowel.",c);
	else
	printf("%c is a consonant.",c);
}

