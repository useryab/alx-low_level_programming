# 0x0F. C - Function pointers

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What are function pointers and how to use them</li>
	<li>What does a function pointer exactly hold</li>
	<li>Where does a function pointer point to in the virtual memory</li>
</ol>

In C programming, a function pointer is a variable that stores the memory address of a function. This means that the function pointer can be used to call the function, just like you would call a function using its name. Function pointers are powerful tools that can be used to achieve a variety of programming tasks, including:

Passing functions as arguments to other functions
* Implementing polymorphism
* Creating callbacks
* Creating dynamic dispatch
* Declaring Function Pointers

To declare a function pointer, you need to use the following syntax:

```C
type (*function_pointer_name)(parameters);
```
Where:

`type` is the return type of the function
`function_pointer_name` is the name of the function pointer
`parameters` is a list of the function's parameters, enclosed in parentheses

For example, the following code declares a function pointer named add_function that points to a function that takes two integer arguments and returns an integer:

```C
int (*add_function)(int, int);
```

## Initializing Function Pointers

Once you have declared a function pointer, you need to initialize it with the address of the function you want it to point to. You can do this using the & operator, which takes the address of a variable. For example, the following code initializes the add_function pointer to point to the add function:

```C
int add(int a, int b) {
  return a + b;
}

int (*add_function)(int, int) = &add;

```

## Calling Functions Through Function Pointers

Once you have initialized a function pointer, you can call the function it points to using the following syntax:

```C
(*function_pointer_name)(arguments);
```
Where:

`function_pointer_name` is the name of the function pointer
`arguments` is a comma-separated list of the function's arguments, enclosed in parentheses

For example, the following code calls the add function through the add_function pointer:

```C
int result = (*add_function)(5, 3);
```
This code will set the result variable to the value of 8, which is the sum of 5 and 3.

## Function Pointers as Arguments

Function pointers can be passed as arguments to other functions. This is a powerful feature that allows you to write code that is more flexible and reusable. For example, the following code defines a function called apply_function that takes a function pointer and an argument as arguments:

```C
void apply_function(int (*function_pointer)(int), int argument) {
  int result = (*function_pointer)(argument);
  printf("Result: %d\n", result);
}
```
This function can be used to call any function that takes an integer argument and returns an integer. For example, the following code calls the apply_function function to pass the add function and the argument 10:

```C
apply_function(add, 10);
```
This code will print the following output:

`Result: 10`

## Conclusion

Function pointers are a powerful tool that can be used to achieve a variety of programming tasks in C. They can be used to pass functions as arguments, implement polymorphism, create callbacks, and create dynamic dispatch.

## RESOURCES:

 <ol>
	<li><a href="/rltoken/LvjzIoEU3gQ_D5QCwoGtxA" title="Function Pointer in C" target="_blank">Function Pointer in C</a> </li>
	<li><a href="/rltoken/3y_80bkcxiZ5Pc5Zk6NCvQ" title="Pointers to functions" target="_blank">Pointers to functions</a> </li>
	<li><a href="/rltoken/i-zereq8foaoJZfG383Rvg" title="Function Pointers in C / C++" target="_blank">Function Pointers in C / C++</a> </li>
	<li><a href="/rltoken/jbk8p-_m0dJq2KC7tHrJbg" title="why pointers to functions?" target="_blank">why pointers to functions?</a> </li>
	<li><a href="/rltoken/HuMpTjvVc_PxonkOuzQEbg" title="Everything you need to know about pointers in C" target="_blank">Everything you need to know about pointers in C</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book:

0.	[**0-print_name.c**:](#0-print_namec) Function that prints a name.
1.	[**1-array_iterator.c**:](#1-array_iteratorc) Function that executes a function given as a parameter on each element of an array.
2.	[**2-int_index.c**:](#2-int_indexc) Function that searches for an integer.
3.	[**3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h**:](#3-mainc-3-op_functionsc-3-get_op_funcc-3-calch) Program that performs simple operations.This task requires that you create four different files.<strong>3-calc.h</strong>This file should contain all the function prototypes and data structures used by the program.
You can use this structure<strong>3-op_functions.c</strong>This file should contain the 5 following functions (not more)<strong>3-get_op_func.c</strong>This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.<strong>3-main.c</strong>This file should contain your <code>main</code> function only.<strong>Compilation and examples</strong>

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-print_name.c

**<p>Function that prints a name.</p>**

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ cat 0-main.c
#include &lt;stdio.h&gt;
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] &gt;= 'a' &amp;&amp; name[i] &lt;= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_name.c -o a
julien@ubuntu:~/0x0e. Function pointers$ ./a 
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
julien@ubuntu:~/0x0e. Function pointers$ 
</code></pre>

### 1-array_iterator.c

**<p>Function that executes a function given as a parameter on each element of an array.</p>**

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ cat 1-main.c
#include &lt;stdio.h&gt;
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &amp;print_elem);
    array_iterator(array, 5, &amp;print_elem_hex);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-array_iterator.c -o b
julien@ubuntu:~/0x0e. Function pointers$ ./b 
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
julien@ubuntu:~//0x0e. Function pointers$ 
</code></pre>

### 2-int_index.c

**<p>Function that searches for an integer.</p>**

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ cat 2-main.c
#include &lt;stdio.h&gt;
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
    return (elem &gt; 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-int_index.c -o c
julien@ubuntu:~/0x0e. Function pointers$ ./c 
2
1
2
julien@ubuntu:~/0x0e. Function pointers$ 
</code></pre>

### 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h

**<p>Program that performs simple operations.</p><p>This task requires that you create four different files.</p><p><strong>3-calc.h</strong></p><p>This file should contain all the function prototypes and data structures used by the program.
You can use this structure</p><p><strong>3-op_functions.c</strong></p><p>This file should contain the 5 following functions (not more)</p><p><strong>3-get_op_func.c</strong></p><p>This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.</p><p><strong>3-main.c</strong></p><p>This file should contain your <code>main</code> function only.</p><p><strong>Compilation and examples</strong></p>**

<pre><code>
 julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1 + 1
2
julien@ubuntu:~/0x0e. Function pointers$ ./calc 97 + 1
98
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 / 10
102
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '*' 98
100352
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '\*' 98
Error
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 - 98
926
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '%' 98
44
julien@ubuntu:~/0x0e. Function pointers$ 
</code></pre>
