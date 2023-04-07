/*the following program shows that an array passed to a function as an argument is called by
reference unlike an integer which is called by values*/
 #include<stdio.h>
int incre(int [],int);
main()
{
   int a[5],x,i;
   printf("read a matrix:\n");
   for(i=0;i<6;i++)
   {
   	scanf("%d",&a[i]);
   }
   printf("the original values are\n");
   for(i=0;i<6;i++)
   {
   	printf("%d\t",a[i]);
   }
   printf("\nenter the number to be added to the elements:");
   scanf("%d",&x);
   printf("\noriginal value of number is %d",x);
   incre(a,x);
   printf("\nvalues after calling the function:\n");
   for(i=0;i<6;i++)
   {
   	printf("%d\t",a[i]);
   }
   printf("\nvalue of number after calling function is %d",x);  
}
int incre(int x[],int n)
{
   int j;
   for(j=0;j<6;j++)
   {
   	x[j]=x[j]+n;
   }
   	n=n+2;
}




