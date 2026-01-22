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



# Basic C Programs – Explanation

# Introduction

This repository contains **basic and common C programs** written to understand the **fundamentals of C programming**.
These programs help beginners learn how C works, including input/output, decision making, loops, arrays, functions, and files.

The code is written in a **simple and clear format**, making it easy for students to understand and practice.



##  What You Will Learn from These Programs

* Basic structure of a C program
* How to take input and display output
* Conditional statements (`if`, `if-else`, `switch`)
* Looping concepts (`for`, `while`, `do-while`)
* Arrays and strings
* Functions and recursion
* Pointers (basic level)
* File handling basics



##  Structure of a C Program (Common for All Codes)

Every C program mainly contains the following parts:

### 1️. Header Files
c
#include <stdio.h>
* Used to include **built-in functions**
* `stdio.h` allows input (`scanf`) and output (`printf`)

### 2️. Main Function
c
int main()
{
    // code
    return 0;
}
* Execution of program **starts from `main()`**
* `return 0` shows successful program execution

### 3️. Variable Declaration

c
int a, b;
* Variables are used to **store data**
* Common data types:
  * `int` → integer
  * `float` → decimal numbers
  * `char` → single character

### 4️. Input Statement
c
scanf("%d", &a);
* Used to take input from the user
* `&` is used to store value in memory

### 5️. Output Statement

c
printf("Result = %d", a);
* Used to display output on the screen

