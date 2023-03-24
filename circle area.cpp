#include<stdio.h>
float circle_area(float);
main()
{
	float r,a;
	printf("enter the radius of circle: ");
	scanf("%f",&r);
	a=circle_area(r);
	printf("area of the circle is %.4f",a);
}
float circle_area(float r)
{
	float a =3.14*r*r;
	return a;
}
