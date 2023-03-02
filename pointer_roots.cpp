//program to find roots of equation using funcion(pointers as arguments)
#include<stdio.h>
#include<math.h>
void roots(int *,int *,int *);
main(){
	int a,b,c;
	printf("enter the quadratic coefficients: ");
	scanf("%d,%d,%d",&a,&b,&c);
	roots(&a,&b,&c);
}
void roots(int *p,int *q,int *r)
{
	if(((*q)*(*q)-4*(*p)*(*r))>=0)
	{
     	float r1=(-(*q)+(sqrt((*q)*(*q)-4*(*p)*(*r))))/(2*(*p));
	    float r2=(-(*q)-(sqrt((*q)*(*q)-4*(*p)*(*r))))/(2*(*p));
     	printf("\nthe roots are %.2f and %.2f",r1,r2);
    }
    else
    printf("the equation has complex roots\n");
}
