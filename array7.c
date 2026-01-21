#include<stdio.h>
main()
{
	int a[10][10],b[10][10],sum[10][10],i,j,r1,c1,r2,c2;
	printf("Enter the matrix-a row and column size: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter the matrix-b row and column size: ");
	scanf("%d%d",&r2,&c2);
	printf("Enter  matrix-a elements one by one",(r1*c1));
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter %d matrix-b elements one by one\n",r2*c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("matrix-a elements are\n ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
	} 
	printf("\n");

   printf("matrix-b elements are\n ");  
    for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
		printf("%d\t",b[i][j]);
		
	}
	printf("\n");
}
if(r1!=r2&&c1!=c2)
{
	printf("matrix addition is not possible");
}
else 
{
	for (i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
}
printf("addition of two matrices are::\n");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
		printf("%d\t",sum[i][j]);
	}
	printf("\n");
}
}
