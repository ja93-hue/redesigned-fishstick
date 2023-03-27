#include<stdio.h>
void swap(int *,int *,int ,int);
main()
{
	int x,y,*p,*q;
	p=&x;
	q=&y;
	printf("enter values:");
	scanf("%d,%d",&x,&y);
	printf("original values of x and y: %d and %d",x,y);
	swap(&x,&y,x,y);
	printf("\nnew values of x and y: %d and %d",x,y);
}
void swap(int *p,int *q,int a,int b)
{
	*p=b;
	*q=a;
	
}
