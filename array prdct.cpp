//program to print product of elements of an array
#include<stdio.h>
main(){
	int n,product=1;
	printf("choose the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		product = product*arr[i];
	}
	printf("the product of the elements of the array is %d",product);
}
