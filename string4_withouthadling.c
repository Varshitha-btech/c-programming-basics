#include<stdio.h>
main()
{
	char s1[50],s2[50];
	int i,flag;
	printf("enter string1: ");
	gets(s1);
	printf("enter string2: ");
	gets(s2);
	for(i=0; ;i++)
	{ 
	if(s1[i]!=s2[i])
	{
		flag=1;
		break;
	}

	
	if(s1[i]=='\0'&&s2[i]=='\0')
	{ 
	  break;
	}
}
  
  if(flag==1)
     printf("strings are not equal");
     else
     printf("enter strings are equal");
	
}
