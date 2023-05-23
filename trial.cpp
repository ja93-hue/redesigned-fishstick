#include<stdio.h>
int rec_num(int [],int);
int max_num(int,int);
main()
{
	int arr[]={9,8,66,3,462,5};
	int max=rec_num(arr,6);
	printf("maximum number is %d",max);
	
}
int rec_num(int a[],int n)
{
	if(n==1)
	{
		return a[0];
	}
	else
	{
		return max_num((rec_num(a,n-1)),a[n-1]);
	}
}
int max_num(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
