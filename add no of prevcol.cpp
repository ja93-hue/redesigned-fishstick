//program to add previous column elements to alternate column elements
#include<stdio.h>
main(){
	int r,c,i,j;
	scanf("%d,%d",&r,&c);
	int mtrx[r][c];
	
	printf("enter the elements of matrix:\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			scanf("%d",&mtrx[i][j]);
		}
	}
	printf("print the matrix\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("%d\t",mtrx[i][j]);
		}
		printf("\n");
	}
	printf("enter the new matrix:\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(j%2==0)
			mtrx[i][j]=mtrx[i][j]+mtrx[i][j-1];
			
			printf("%d\t",mtrx[i][j]);
		}
		printf("\n");
	}
}
