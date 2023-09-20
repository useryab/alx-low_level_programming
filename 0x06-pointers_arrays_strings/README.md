# 0x06. C - More pointers, arrays and strings

## Learning Objectives

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

## Tasks

### 0. strcat

Write a function that concatenates two strings.
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte

### 1. strncat

Write a function that concatenates two strings.
The _strncat function is similar to the _strcat function, except that
* it will use at most n bytes from src; and
* src does not need to be null-terminated if it contains n or more bytes

### 2. strncpy

Write a function that copies a string.

### 3. strcmp

Write a function that compares two strings.

### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

Write a function that reverses the content of an array of integers.

### 5. Always look up

Write a function that changes all lowercase letters of a string to uppercase.

### 6. Expect the best. Prepare for the worst. Capitalize on what comes

Write a function that capitalizes all words of a string.

### 7. Mozart composed his music not for the elite, but for everybody

Write a function that encodes a string into 1337.

* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1

### 8. rot13

Write a function that encodes a string using [rot13](https://en.wikipedia.org/wiki/ROT13)

### 9. Numbers have life; they're not just symbols on paper

Write a function that prints an integer.

###  10. A dream doesn't become reality through magic; it takes sweat, determination and hard work

Add one line to this [code](https://github.com/alx-tools/make_magic_happen/blob/master/magic.c) so that the program prints a[2] = 98, followed by a new line.

### 11. It is the addition of strangeness to beauty that constitutes the romantic character in art

Write a function that adds two numbers.

### 12. Noise is a buffer, more effective than cubicles or booth walls

Write a function that prints a buffer.

## Main.h

```
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *a);
char *cap_string(char *a);
char *leet(char *a);
char *rot13(char *a);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif

```
