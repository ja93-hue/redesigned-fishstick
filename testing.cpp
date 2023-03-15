/*multiplication table*/
#include<stdio.h>
main()
{
	int row=5,column=5,product[row][column],i,j;
	printf("MULTIPLACATION TABLE\n\n");
	printf("    ");
	for(j=1;j<=column;j++)
	printf("%4d",j);
	printf("\n");
	printf("____________________________________\n");
	for(i=1;i<=row;i++)
	{
	
     	printf("    ");
	    for(j=1;j<=column;j++)
	    {
	    	product[i][j]=i*j;
	    	printf("%4d",product[i][j]);
		}
		printf("\n");
	}
	
}
