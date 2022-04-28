#include<stdio.h>
int main()
{
int a=5;
int *b;
*b=a;
printf("%u\n",&a);
printf("%d\n",*&a);
printf("%d",b);


}