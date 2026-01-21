#include<stdio.h>
main()
{
	int a[100],size,i,j,temp;
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("enter %d elements one by one",size);
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	printf("Before sorting array elements are\n");
	for(i=0;i<size;i++)
	printf("%d\t",a[i]);
	for(i=0;i<size;i++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	printf("After sorting array elements are\n");
	for(i=0;i<size;i++)
	printf("%d\t",a[i]);
}
