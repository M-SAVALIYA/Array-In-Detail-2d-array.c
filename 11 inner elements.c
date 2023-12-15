#include<stdio.h>

main()
{
	int a[5][5] = { {1,2,3,4,5,},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int i,j,sum = 0;
	
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{ 
		
			printf("%d  ",a[i][j]);
			
		}
		
		printf("\n");
		
	}
	printf("\n---------------------------------\n");
	
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			if(i!=0 && i!=4 && j!=0 && j!=4)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("\nSum of Inner Elements = %d", sum);
}
