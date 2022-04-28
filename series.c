#include <stdio.h>

int main()
{
   int i,n,sum=0,sum2=0,total;
   printf("Enter the value of n");
   scanf("%d",&n);

   for ( i = 1; i <=n; i++)
   {
       if (i%2==0)
       {
           sum=sum+i;

       }
       if (i%2!=0)
       {
           sum2=i+sum2;
       }
       
   }
   total=sum-sum2;
   printf("%d",total);
}