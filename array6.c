#include<stdio.h>
main()
{
	int a[10][10],r1,c1,i,j;
	printf("Enter matrix-a row and column size");
	scanf("%d%d",&r1,&c1);
	printf("Enter %d matrix-a elements one by one",(r1*c1));
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	
	}
	printf("Matrix-a elements are\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}
