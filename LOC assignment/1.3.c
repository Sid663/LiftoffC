/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
   int radius;
   float pi=3.14, area, circumf, diameter;

   printf("\nEnter radius of circle: ");
   scanf("%d",&radius);
   area = pi * radius * radius;
   printf("\nArea is: %f",area);
   circumf = 2 * pi * radius;
   printf("\nCircumference is: %f",circumf);
   diameter = 2 * radius;
   printf("\nDiameter is: %f" ,diameter);

   return(0);
}
