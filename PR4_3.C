// C program to demonstrate
// working of binary arithmetic
// operators
#include <stdio.h>
#include<conio.h>
void main()
{
    int a = 10, b = 4, res;
    clrscr();
    // printing a and b
    printf("a is %d and b is %d\n", a, b);

    res = a + b; // addition
    printf("a+b is %d\n", res);

    res = a - b; // subtraction
    printf("a-b is %d\n", res);

    res = a * b; // multiplication
    printf("a*b is %d\n", res);

    res = a / b; // division
    printf("a/b is %d\n", res);

    res = a % b; // modulus
    printf("a%%b is %d\n", res);

   getch();
}