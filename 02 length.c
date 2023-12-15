#include<stdio.h>

main()
{
	
	int r,c;
	
	printf("Enter Row Size = ");
	scanf("%d",&r);
	
	printf("Enter Column Size = ");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j,len;
	
	len = sizeof(a)/sizeof(0);
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d ",a[i][j]);
		}
		
		printf("\n");
	}
	
		printf("\nLength of Array = %d\n",len);
}