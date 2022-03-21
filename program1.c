#include <stdio.h>
#include <math.h>
#include <conio.h>
 int  main()
 {
   float length, width, perimeter;

  
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

   
    printf("Perimeter of rectangle = %f  ", perimeter);

    return 0;
     

 }
