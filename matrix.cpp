#include<stdio.h>
main(){
	
	int r,c,i,j;
	scanf("%d,%d",&r,&c);        //r represents rows and c represents columns
	int matrix[r][c];
	
	printf("enter the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			//enter the elements of matrix
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int num,bread=0,jam=0;
	printf("enter number to be compared: ");
	scanf("%d",&num);
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(num==matrix[i][j])
			{
				bread=1;              // if num exists bread value changes to 1 from 0
				                      // jam values remains 0
			}
				else
			{
				jam=1;               //if num doesnt exist jam value changes to 1 from 0
				                     // bread value remains 0
			}
		}
	}
	
	if(bread==1)
	printf("number exists");
	else
	printf("number does not exist");
	
}
