#include<stdio.h>
main()
{
	int i,j,k,a[22],egg=0,chick=0;
	a[0]=0,a[21]=0;
	for(i=1;i<=20;i++)
	{
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=2;i<20;i++)
	{
		for(k=2;k<a[i-1];k++)
		{
			if(a[i-1]%k==0)
			egg=1;
		}
		for(k=2;k<a[i+1];k++)
		{
			if(a[i+1]%k==0)
			chick=1;
		}
		if((egg==0)&&(chick==0))
		{
			printf("a[%d]=%d is surrounded by prime numbers on either sides\n",i,a[i]);
			count++;
		}
		egg=0;
		chick=0;
	}
	if(count==0)
	{
		printf("such number is not found from the input\n");
	}
	
}
