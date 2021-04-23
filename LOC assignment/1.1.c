/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2;
    int sum,dif,mult,mod;
    float div;
    printf("enter number");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    dif = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;
    printf("sum = %d\n", sum);
    printf("difference = %d\n", dif);
    printf("product = %d\n", mult);
    printf("quotient = %f\n", div);
    printf("modulus = %d", mod);

    return 0; 
}

    


