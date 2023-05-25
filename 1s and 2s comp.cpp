#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int i,k,j,m,len;
	char a[16];
	char temp[16];
	printf("enter the binary number :");
	gets(a);
	for(j=0;a[j]!='\0';j++)
	{
		if((a[j]!='1')&&(a[j]!='0'))
		{
			printf("\n incorrect binary number");
		    exit(1);
		}
	}
	strcpy(temp,a);
	len=strlen(a);
	for(i=len-1;a[i]!='1';i--)
	;
	for(k=i-1;k>=0;k--)
	{
		if(a[k]=='1')
		a[k]='0';
		else
		a[k]='1';
	}
	for(m=0;temp[m]!='\0';m++)
	{
		if(temp[m]=='1')
		temp[m]='0';
		else
		temp[m]='1';
	}
	printf("1s complement is %s\n",temp);
	printf("2s complement is %s",a);
	
	
}
