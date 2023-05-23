#include<stdio.h>
int toh(int,int,int);
main()
{
	int discs;
	printf("enter the number of discs:");
	scanf("%d",&discs);
	printf("the steps are:\n");
	toh(discs,1,3);
}
int toh(int n,int start,int end)
{
	int other;
	if(n==1)
	printf("(%d,%d)\n",start,end);
	else
	{
		other=6-(start+end);
		toh(n-1,start,other);
		printf("(%d,%d)\n",start,end);
		toh(n-1,other,end);
	}
}
