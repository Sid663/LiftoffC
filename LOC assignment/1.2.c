/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  float cel, fah;
  /*put float not int*/
  printf ("enter celsius  ");
  scanf ("%f", &cel);
  /*formula*/
  fah = (cel * 9 / 5) + 32;
  printf("%f celsius = %f Fahrenheit", cel, fah);

  return 0;
}
