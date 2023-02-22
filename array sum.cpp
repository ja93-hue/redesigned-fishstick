//program to add the elements of array
#include<stdio.h>
main(){
	int m,sum=0;
	printf("choose the number of elements in the array: ");
	scanf("%d",&m);
	int arr[m];
	
	printf("enter the elements\n");
	for(int j=0;j<m;j++)
	{
		scanf("%d",&arr[j]);
		sum = sum + arr[j];
	}
	printf(" sum of the elements is %d",sum);
}
