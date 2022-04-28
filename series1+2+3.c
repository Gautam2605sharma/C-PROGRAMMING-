#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    
    for ( i = 1; i <=n; i++)
    {
       sum=i+sum; 
    }
    printf("%d",sum);

}