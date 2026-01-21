#include<stdio.h>
main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,r1,c1,r2,c2,k;
	printf("enter the matrix-a row and column size: ");
	scanf("%d%d",&r1,&c1);
	printf("enter the matrix-b row and column size: ");
	scanf("%d%d",&r2,&c2);
	printf("enter %d matrix-a one by one", r1*c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter %d matrix-b one by one",r2*c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

printf("matrix-a elements are\n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}

printf("matrix-b elements are\n ");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}
	if(c1!=r2)
	{
		printf("matrix multiplication is not possible\n");
	}
	else
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				mul[i][j]=0;
				for(k=0;k<c2;k++)
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("multiplication of two matrices are::\n");
	for(i=0;i<r1;i++)
  {
  
	for(j=0;i<c2;j++);
	{
		printf("%d\t",mul[i][j]);
	}
	printf("\n");}
}
  



