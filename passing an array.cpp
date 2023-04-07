#include<stdio.h>
int avg(int [],int);
main()
{
	int n,i,average;
	printf("number of students: ");
	scanf("%d",&n);
	int marks[n];
	printf("\nenter marks of %d students\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	average=avg(marks,n);
	printf("\naverage of class is %d",average);
	
}
int avg(int a[],int x)
{
	int sum=0,i;
	for(i=0;i<x;i++)
	{
		sum = sum+a[i];
	}
	int average=sum/x;
	return average;
}




