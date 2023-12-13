# 0x10. C - Variadic functions

Variadic functions in C are functions that can accept a variable number of arguments. The term "variadic" comes from the ability of these functions to take a variable or varying number of arguments. The most common example of a variadic function in C is the printf function from the standard library.

The syntax for a variadic function involves using ellipses (...) in the function declaration to indicate that the function can accept a variable number of arguments. The <stdarg.h> header is then used to provide mechanisms for accessing these arguments.

Here's a basic example:

```c
#include <stdio.h>
#include <stdarg.h>

// Example of a variadic function
int sum(int num, ...) {
    int result = 0;

    va_list args;
    va_start(args, num);

    for (int i = 0; i < num; ++i) {
        result += va_arg(args, int);
    }

    va_end(args);

    return result;
}

int main() {
    printf("Sum: %d\n", sum(3, 5, 10, 15));
    printf("Sum: %d\n", sum(4, 2, 4, 6, 8));

    return 0;
}
```
In this example, the sum function takes an integer (num) followed by a variable number of arguments. The va_list, va_start, and va_arg macros from <stdarg.h> are used to iterate through the variable arguments. Finally, va_end is used to clean up.

Key points:

The ellipses (...) in the function declaration indicate a variadic function.
The `va_list` , `va_start`, `va_arg`, and `va_end` macros from `<stdarg.h>` are used to handle variable arguments.
Variadic functions are useful when the number of arguments is not known at compile time, allowing for flexibility in function design. However, proper handling of variadic arguments requires careful consideration and error checking to avoid runtime issues.

## GENERAL :open_book:

 <ol>
	<li>What are variadic functions</li>
	<li>How to use <code>va_start</code>, <code>va_arg</code> and <code>va_end</code> macros</li>
	<li>Why and how to use the <code>const</code> type qualifier</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/KNHC7kjcnZZCKDCHdXis4w" title="stdarg.h" target="_blank">stdarg.h</a> </li>
	<li><a href="/rltoken/VOS7s9X1ysxlU2X3xtCmFw" title="Variadic Functions" target="_blank">Variadic Functions</a> </li>
	<li><a href="/rltoken/vxuoclIH_Hap9c7sciDnFQ" title="Const Keyword" target="_blank">Const Keyword</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-sum_them_all.c**:](#0-sum_them_allc) Function that returns the sum of all its parameters.
1.	[**1-print_numbers.c**:](#1-print_numbersc) Function that prints numbers, followed by a new line.
2.	[**2-print_strings.c**:](#2-print_stringsc) Function that prints strings, followed by a new line.
3.	[**3-print_all.c**:](#3-print_allc) Function that prints anything.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-sum_them_all.c

**<p>Function that returns the sum of all its parameters.</p>**

<pre><code>julien@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
#include &lt;stdio.h&gt;
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a 
1122
500
julien@ubuntu:~/0x0f. variadic functions$ 
</code></pre>

### 1-print_numbers.c

**<p>Function that prints numbers, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x0f. variadic functions$ cat 1-main.c
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
julien@ubuntu:~/0x0f. variadic functions$ 
</code></pre>

### 2-print_strings.c

**<p>Function that prints strings, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x0f. Variadic functions$ cat 2-main.c
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_strings.c -o c
julien@ubuntu:~/0x0f. Variadic functions$ ./c 
Jay, Django
julien@ubuntu:~/0x0f. Variadic functions$ 
</code></pre>

### 3-print_all.c

**<p>Function that prints anything.</p>**

<pre><code>julien@ubuntu:~/0x0f. Variadic functions$ cat 3-main.c
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'H', 0, "lberton");
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-print_all.c -o d
julien@ubuntu:~/0x0f. Variadic functions$ ./d 
H, 0, lberton
julien@ubuntu:~/0x0f. Variadic functions$ 
</code></pre>
