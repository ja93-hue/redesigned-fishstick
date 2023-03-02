//program to find roots of a quadratic equation
#include<stdio.h>
#include<math.h>
void roots(int,int,int);
main()
{
	int a,b,c;
	printf("enter the quadratic coefficients: ");
	scanf("%d,%d,%d",&a,&b,&c);
    roots(a,b,c); 
}
void roots(int a,int b,int c)
{
	if((b*b-4*a*c)>=0)
	{
      float r1,r2;
	  r1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
	  r2=(-b-(sqrt(b*b-4*a*c)))/(2*a);

      printf("the first root is %.2f\n",r1);
	  printf("the second root is %.2f\n",r2);	
    }
   
    else 
    printf("roots are complex\n");
    
}
