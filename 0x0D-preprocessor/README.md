# 0x0D. C - Preprocessor

In C programming, macros are a way to define shorthand notations or symbolic names for pieces of code. They are created using the #define directive. Macros are essentially a form of text substitution performed by the preprocessor before the actual compilation of the code. Here's a basic overview of macros in C:

Syntax of #define Macro:

```c
#define MACRO_NAME replacement_text
```
Example of Simple Macro:
```c
#define PI 3.14159
```
In this example, whenever the preprocessor encounters PI in the code, it replaces it with 3.14159. It is essentially a way to avoid repetitive typing and enhance code readability.

Use Cases of Macros:
Constant Values:

```c
#define MAX_SIZE 100
Function-like Macros:
```

```c
#define SQUARE(x) ((x) * (x))
This can be used like SQUARE(5), and it will be replaced with (5 * 5).
```

Conditional Compilation:

```c

c
#ifdef DEBUG
    // Debugging code
#endif
```

Header Guards:
Header guards are a common use of macros to prevent multiple inclusions of the same header file:


```c
#ifndef MY_HEADER_H
#define MY_HEADER_H

// Header contents

#endif
```

String Concatenation and Token Pasting:

```c
#define CONCAT(a, b) a ## b
This can be used like CONCAT(var, 1) to create var1.
```

Important Considerations:
Macros are simple text substitutions; they don't perform type checking or other semantic analysis.
Be cautious with parentheses in macro definitions to avoid unexpected behavior.
Avoid using macros for complex or multiline code, as it can lead to code that is hard to read and debug.
Example of Function-like Macro:

```c

#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
    int num = 5;
    int result = SQUARE(num);

    printf("Square of %d is %d\n", num, result);

    return 0;
}

```
In this example, SQUARE(num) gets replaced with ((num) * (num)) during preprocessing, resulting in the desired square calculation.

## Resources

### Read or watch:

* [Understanding C program Compilation Process](https://www.youtube.com/watch?v=eW5he5uFBNM)
* [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
* [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
* [Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
* [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
* [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
* [include guard](https://www.cs.kent.edu/~nmadi/CS2/Notes/include_guard.html#:~:text=Include%20guards%20are%20used%20to,being%20included%20more%20than%20once.&text=The%20header%20file%20above%20has,end%20of%20the%20if%20body.)
* [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)
* [Macros and its types in C/C++](https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/)
* [How a Preprocessor works in C?](https://www.geeksforgeeks.org/preprocessor-works-c/)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

## Tasks

### 0. Object-like Macro

Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

### 1. Pi

Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

### 2. File name

Write a program that prints the name of the file it was compiled from, followed by a new line.

### 3. Function-like macro

Write a function-like macro ABS(x) that computes the absolute value of a number x.

### 4. SUM

Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
