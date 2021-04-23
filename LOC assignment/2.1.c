/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //declare
    int num, sum=0;
    //input
    printf("enter a number");
    scanf("%d", &num);
    //logic
    while(num!=0)
    {
        sum +=num%10;
        num=num/10;
    }
    //output
    printf("sum of digit = %d", sum );
    return 0;
}
