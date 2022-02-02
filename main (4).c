/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int var1 = 3000 , var2 = 60, var3 = 360, result;
    printf("RPM = %d\n", var1);
    printf("Seconds = %d \n", var2);
    printf("Degrees = %d\n", var3);
    
    //solution
    result = var1 / var2 * var3;
    printf ("%d RPM divide %d secs multiply %d degrees is %d degrees per second", var1, var2, var3, result);

    return 0;
}

