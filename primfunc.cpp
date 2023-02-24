//program to find if number is prime or not using user defined function
#include<stdio.h>    //function declaration
void prime(int);
main(){
	int num;
	printf("enter the number:\n ");
	scanf("%d",&num);
	prime(num);     //calling the function ; transfers the variable "num" to the function defination
}
void prime(int a)          //function defination
{
	int i,count=0;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		count++;	
	}
	if(count>1)
	printf("%d is not prime",a);
	else
	printf("%d is prime",a);
}
