#include<stdio.h>
main()
{
  int age1,age2,age3;
  printf("Enter the age of first child:");
  scanf("%d",&age1);
  printf("Enter the age of second child:");
  scanf("%d",&age2);
  printf("Enter the age of third child:");
  scanf("%d",&age3);
  int secondYoungest;
  if((age1>age2&&age1,age3)||(age1<age2&&age1>age3))
     secondYoungest=age1;
     else if((age2>age1&&age2<age3)||(age2<age1&&age2>age3))
     secondYoungest=age2;
     else
     secondYoungest=age3;
     printf("The second youngest child is %d years old.\n",secondYoungest);
 }


