# c-programming-basics
Basic C programs by a 1st year B. tech student

Swap Two Numbers Using Call by Reference in C

# Aim
To write a C program to swap two numbers using call by reference.

# Theory
Call by reference is a method of passing arguments to a function by using their addresses.
Any change made inside the function affects the original variables.

In C, call by reference is implemented using pointers.

# Program Explanation
- The main function reads two integer values.
- The addresses of the variables are passed to the swap function.
- The swap function uses pointer variables to access and interchange the values.
- The swapped values are reflected back in the main function.

# Program
c
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a, b;
    printf("Enter a, b values: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("After swap a=%d, b=%d\n", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
