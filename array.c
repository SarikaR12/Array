#include<stdio.h>

main()
{
	int i,n,a[100];
	
	printf("Enter size of array =");
	scanf("%d",&n);
	
	printf("Enter value of Elements = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}