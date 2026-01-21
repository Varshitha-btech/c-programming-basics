#include<stdio.h>
main()
{
	int a[100],i,size,sum=0;
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("Enter %d elements one by one",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	    sum=sum+a[i];
	    printf("sum of array elements are: %d\n",sum);
}
