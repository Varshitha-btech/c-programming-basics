#include<stdio.h>
main()
{
	int a[100],i,size;
	printf("enter the size:");
	scanf("%d",&size);
	printf("enter %d elements",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Reverse of array elements are\n");
	for(i=size-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
