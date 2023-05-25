/*program to convert any base system number to decimal*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int b;
	char str[10];
	printf("enter the string:");
	gets(str);
	printf("enter the base of the number:");
	scanf("%d",&b);
	char *ptr;
	long int x = strtol(str,&ptr,b);
	printf("the number is %d\n",x);
	
}
