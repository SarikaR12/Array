#include<stdio.h>

main()
{
	int i,n,n1,temp=0,a[100],b[100],c[200],ans;
	printf("Size of Array A =");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i] =a[i];
    }      
	temp = i;
	  
	  printf("Size of Array B = ");
	  scanf("%d",&n1);             
	
	  for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		c[temp] = b[i];
		temp++;	
	}
		printf("\n merge Array = ");
		for(i=0;i<n+n1;i++)
		{
		  printf("%d\n",c[i]);
		
	    }
}


