#include<stdio.h>
main()
{
	int a[10][10],t[10][10],r1,c1,i,j;
	printf("Emter matrix-a elements row and column size");
	scanf("%d",&r1,&c1);
	printf("enter %d elements in matrix one by one\n",r1*c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix-a elements are\n");
	for(i=0;i<r1;i++)
	{
		for(i=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("transpose of a matrix is :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("transpose of a matrix is:\n");
	for(i=0;i<r1;j++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}
