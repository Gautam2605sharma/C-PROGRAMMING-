#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5];
    b=a;
    printf("%d",b[0]);
    return 0;
}