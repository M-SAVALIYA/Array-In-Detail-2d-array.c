#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter Row size = ");
	scanf("%d",&r);
	
	printf("Enter Column size = ");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j,sum=0;
	
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
			printf("%d",a[j][i]);
		}
		
		printf("\n");
		
	}
	
	for(i=0 ; i<r ; i++)
	{
		sum = 0;
		
		for(j=0 ; j<c ; j++)
		{
			sum = sum + a[i][j];
		}
		
		printf("Sum of %d row = %d\n",i,sum);
	}
	
}