//program to subtract a constant from alterante column elements of the matrix
#include<stdio.h>
main(){
	int m,n;
	scanf("%d,%d",&m,&n);
	int mat[m][n];
	
	printf("enter the elements\n");
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("print the matrix\n");
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	
	printf("enter the number to be subtracted: ");
	int number;
	scanf("%d",&number);
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j%2==0)
			mat[i][j]=mat[i][j]-number;
			
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	
	
}
