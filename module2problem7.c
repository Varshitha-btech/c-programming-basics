#include<stdio.h>
main()
{
	float physics,chemistry,maths,jee;
	float pcm_avg;
	printf("Enter marks in physics(out of 100): ");
	scanf("%f",&physics);
	printf("Enter marks in chemistry(out of 100):");
	scanf("%f",&chemistry);
	printf("Enter marks in Mathematics(out of 100):");
	scanf("%f",&maths);
	printf("Enter JEE percentile:");
	scanf("%f",&jee);
	pcm_avg=(physics+chemistry+maths)/3;
	printf("\n---eligibilityCheck---\n");
	if(pcm_avg>=60)
	{
		printf("Eligible:average in PCM is%.2f%%(>=60%%)\n",pcm_avg);
	}
	else if((maths>=65&&physics>=65)||(maths>=65&&chemistry>=65))
	{
   	printf("Eligible:Scored>=65%%in maths and one of physics/chemistry.\n");
	}
	else if(jee>=90)
	{
		printf("Eligible:JEE percentile is%.2f(>=90)\n",jee);
	}
	else
	{
		printf("Not Eligible for admission.\n");
	}
	}

