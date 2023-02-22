//program to print middle number among three numbers
#include<stdio.h>
main(){
	int a,b,c;
	printf("enter the values of the three numbers: ");
	scanf("%d,%d,%d",&a,&b,&c);
	
	if(a>b&&a>c)
	{  
		if(b>c)
		printf("%d is the middle number",b);
		else
		printf("%d is the middle number",c);
	}
    if(b>a&&b>c)
	{  
		if(a>c)
		printf("%d is the middle number",a);
		else
		printf("%d is the middle number",c);
	}
	if(c>a&&c>b)
	{   
		if(a>b)
		printf("%d is the middle number",a);
		else
		printf("%d is the middle number",b);
	}
}
