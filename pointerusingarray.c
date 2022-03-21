#include <stdio.h>

int main()
{
    int i, a[3]={1,2,3,4};
    int *p;
    p=a;
    for ( i = 1; i <4; i++)
    {
        printf("Value of array is %u",*p);
        printf("\n");
        p++;
    }
    return 0;

}