#include<stdio.h>
int GCD(int a,int b)
{
    if(a==b)
    return(a);
    if(a%b==0)
    return (b);
    if(b%a==0)
    return (a);
    if(a>b)
    return(a%b,b);
    else
    return(a,b%a);
}
int main()
{
    int i,a,b;
    printf("enter two numbers= ");
    scanf("%d",&a);
    scanf("%d",&b);
printf("GCD Of %d,%d is %d",a,b,GCD(a,b));
}