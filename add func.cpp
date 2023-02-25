//program to add two numbers using user defined function
#include<stdio.h>
int add(int,int);
main()
{
   int m,n,p;
   printf("enter the numbers: ");
   scanf("%d,%d",&m,&n);
   p=add(m,n);
   printf("sum of the numbers is %d",p);
}
int add(int a,int b){
	int c;
	c=a+b;
	return c;
}
