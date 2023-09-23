# [0x05. C - Pointers, arrays and strings](https://intranet.alxswe.com/projects/216)

## Learning Objectives :white_check_mark:

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General :bookmark_tabs:
* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

## Tasks :memo::pencil:

### [0. 98 Battery st.](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/0-reset_to_98.c) :battery:

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

### [1. Don't swap horses in crossing a stream](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/1-swap.c) :racehorse: :recycle:

Write a function that swaps the values of two integers. 

### [2. This report, by its very length, defends itself against the risk of being read](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/2-strlen.c)

Write a function that returns the length of a string.

### [3. I do not fear computers. I fear the lack of them](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/3-puts.c)

Write a function that prints a string, followed by a new line, to stdout.

### [4. I can only go one way. I've not got a reverse gear](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/4-print_rev.c)

Write a function that prints a string, in reverse, followed by a new line.

### [5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/5-rev_string.c)

Write a function that reverses a string.

### [6. Half the lies they tell about me aren't true](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/6-puts2.c)

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

### [7. Winning is only half of it. Having fun is the other half](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/7-puts_half.c)

Write a function that prints half of a string, followed by a new line.

### [8. Arrays are not pointers](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/8-print_array.c)

Write a function that prints n elements of an array of integers, followed by a new line.

### [9. strcpy](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/9-strcpy.c)

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

* Return value: the pointer to dest

### [10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/100-atoi.c)

Write a function that convert a string to an integer.

### [11. Don't hate the hacker, hate the code](https://github.com/useryab/alx-low_level_programming/blob/main/0x05-pointers_arrays_strings/101-keygen.c)

Create a program that generates random valid passwords for the program [101-crackme](https://github.com/alx-tools/0x04.c)

## Resources :books:

* [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
* [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
* [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
* [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)
* [Arrays & Pointers in C](https://www.youtube.com/playlist?list=PLBlnK6fEyqRjoG6aJ4FvFU1tlXbjLBiOP)
* [Arrays in C - part 1 | Introduction to Arrays](https://www.youtube.com/watch?v=08LWytp6PNI)
* [Strings in C](https://www.youtube.com/playlist?list=PLBlnK6fEyqRhwQbYrTDZYJaB4z1YgsAPW)
* [Pointers in C for Absolute Beginners – Full Course](https://www.youtube.com/watch?v=MIL2BK02X8A)
* [you will never ask about pointers again after watching this video](https://www.youtube.com/watch?v=2ybLD6_2gKM)

## Main.h

```
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);

#endif

```   
