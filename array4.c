#include<stdio.h>
main()
{
	int a[100],i,size,key,flag=0;
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("Enter %d elements one by one",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<size;i++)
		{
			if(a[i]==key)
		
		{
			printf("%d element is found at %d position",key,i++);
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("Elements is not found");
}
