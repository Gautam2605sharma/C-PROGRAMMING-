#include <stdio.h>
int main()
{
    int arr[7],i,j,large;
   printf("enter the values");
   for ( i = 0; i < 4; i++)
   {
       scanf("%d",&arr[i]);
   }
   
   for ( i = 0; i < 7; i++)
   {
     
    if (arr[i]>arr[0])
    {
        large=arr[i];
         printf("%d",large);
    }
    else
     {
         large=arr[0];
           printf("%d",large);
           
     } 
      
       

    }
    


   


  
}