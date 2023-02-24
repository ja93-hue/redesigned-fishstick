#include<stdio.h>
void prime(int);
main(){
	int num;
	scanf("%d",&num);
	prime(num);
}
void prime(int a)
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
