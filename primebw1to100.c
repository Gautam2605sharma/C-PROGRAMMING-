#include<stdio.h>  
int main()
{
    int i, j, flag, rem;
    printf("2\n");
    for (i = 3; i <= 100; i++)
    {
        flag = 0;
        for (j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d,", i);
    }
  
    return 0;
}