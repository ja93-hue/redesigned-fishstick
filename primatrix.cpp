#include<stdio.h>
main(){
	int m,n,k;
	scanf("%d,%d",&m,&n);
	int fish[m][n];
	
	printf("enter elements of matrix\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&fish[i][j]);
		}
	}
	printf("are elements of the matrix prime or not\n");
	int count=0,x;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=2;k<fish[i][j];k++)
			{
				x=fish[i][j];
				if(x%k==0)
				{
					count=1;
				}
			}
			
			if(count==0)
			{
				printf("%d is prime\n",fish[i][j]);
			}
			else
			{
				printf("%d is not prime\n",fish[i][j]);
				count=0;
			}
		}
	}
}
