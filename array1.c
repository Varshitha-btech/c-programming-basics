#include<stdio.h>
main()
{
	int a[100],i,size;
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("Enter %d elements",size);
	for(i=0;i<size;i++)
	{
	
	   scanf("%d",&a[i]);
}
 printf("Array elements are");
 for(i=0;i<size;i++)
 {
 	printf("%d\t",a[i]);
 }
}
