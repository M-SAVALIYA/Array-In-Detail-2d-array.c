#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter Row Size = ");
	scanf("%d",&r);
	
	printf("Enter Column Size = ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],sum[r][c];
	int i,j;
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		
		printf("\n");
		
	}
	
	printf("\n---------------------\n");
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
		
		printf("\n");
		
	}
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d ",sum[i][j]);
		}
		
		printf("\n");
		
	}
	
		
}
	