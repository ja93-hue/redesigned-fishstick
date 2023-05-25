#include<stdio.h>
void swap(int *,int *);
void bubble(int,int[]);
int bin_search(int [],int,int,int,int *);
main()
{
	int n,i,num,flag=0;
	printf("enter size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("read the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("original array:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	bubble(n,a);
	printf("\nsorted array:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	while(1)
	{
		printf("\nenter target element for binary search:");
    	scanf("%d",&num);
	    int j= bin_search(a,num,0,n-1,&flag);
	    if(flag==0)
	    printf("\n%d is found at position %d of the sorted array",num,j+1);
	    else
        printf("\nelement does not belong in the array");
        flag==0;
	}
	   	
}
void swap(int *a,int *b)
{
	int temp;
	temp =*a;
	*a=*b;
	*b=temp;	
}
void bubble(int n,int arr[])
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);
		}
		printf("\nPASS %d:\t",j+1);
		for(int k=0;k<n;k++)
		{
			printf("%d\t",arr[k]);
		}
	}
}
int bin_search(int a[],int x, int low,int high,int *p)
{
    while(low<=high)
	{
		int mid = (low + high)/2;
		if(x==a[mid])
		return mid;
		else if(x>a[mid])
        low = mid+1;
		else
		high = mid-1;		
	}
	*p=1;
}





