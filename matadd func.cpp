#include<stdio.h>
void mat_add(int m1[5][5],int m2[5][5],int m3[5][5],int,int);
main()
{
    int mat1[5][5],mat2[5][5],mat3[5][5],m,n,i,j;
	//values of rows and columns to be less than or equal to 5
	printf("enter rows(<=5) and columns(<=5): ");
	scanf("%d,%d",&m,&n);
	
	//read first matrix
	printf("enter the values elements of first matrix:\n");
	for( i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	//read second matrix
	printf("enter the values elements of second matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	
    mat_add(mat1,mat2,mat3,m,n);
    printf("resultant matrix:\n");
	
	for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	 }
}
void mat_add(int m1[5][5],int m2[5][5],int m3[5][5],int a,int b)
{

	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
	
}

