#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter Row Size = ");
	scanf("%d",&r);
	
	printf("Enter Column Size = ");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j,sum=0,sum2;
	
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
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			if(i==j)
			{
				sum = sum + a[i][j];
			}
			if(i+j==2)
			{
				sum = sum2 + a[i][j];
			}
			
		}
	}
	
	int sum3 = sum + sum2;
	
	printf("\nDiagonal Sum = %d",sum);
	printf("\nAnti-diagonal Sum = %d",sum2);
	printf("\nCross-diagonal Sum = %d",sum3);
	
}