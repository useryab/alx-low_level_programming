# 0x07. C - Even more pointers, arrays and strings

# Resources :books:

## Read or watch: 

* [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
* [C – Pointer to Pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
* [Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
* [C – Pointer to Pointer (Double Pointer)](https://www.geeksforgeeks.org/c-pointer-to-pointer-double-pointer/)
* [Pointers in C- part 4 | Pointer to Pointer (Double Pointer)](https://www.youtube.com/watch?v=TPNYntM-5o4)
* [Two dimensional (2D) arrays in C programming with example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)
* [memset() in C](https://www.geeksforgeeks.org/memset-c-example/) 
* []()
## Learning Objectives :white_check_mark:

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings

## Tasks :bookmark_tabs:

### 0. memset

Write a function that fills memory with a constant byte.

Prototype: ==char *_memset(char *s, char b, unsigned int n);==
* The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
* Returns a pointer to the memory area s
* FYI: The standard library provides a similar function: memset. Run man memset to learn more.

### 1. memcpy 

Write a function that copies memory area.

Prototype: ==char *_memcpy(char *dest, char *src, unsigned int n);==
* The _memcpy() function copies n bytes from memory area src to memory area dest
* Returns a pointer to dest
* FYI: The standard library provides a similar function: memcpy. Run man memcpy to learn more.

### 2. strchr

Write a function that locates a character in a string.

Prototype: ==char *_strchr(char *s, char c);==
* Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
* FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.

### 3. strspn

Write a function that gets the length of a prefix substring.

Prototype: ==unsigned int _strspn(char *s, char *accept);==
* Returns the number of bytes in the initial segment of s which consist only of bytes from accept
* FYI: The standard library provides a similar function: strspn. Run man strspn to learn more.

### 4. strpbrk

Write a function that searches a string for any of a set of bytes.

Prototype: ==char *_strpbrk(char *s, char *accept);==
* The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
* Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
* FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.

### 5. strstr

Write a function that locates a substring.

Prototype: ==char *_strstr(char *haystack, char *needle);==
* The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
* Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
* FYI: The standard library provides a similar function: strstr. Run man strstr to learn more.

### 6. Chess is mental torture

Write a function that prints the chessboard.

Prototype: ==void print_chessboard(char (*a)[8]);==

### 7. The line of life is a ragged diagonal between duty and desire

Write a function that prints the sum of the two diagonals of a square matrix of integers.

Prototype: ==void print_diagsums(int *a, int size);==

Format: see example
* You are allowed to use the standard library
* Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.

### 8. Double pointer, double fun

Write a function that sets the value of a pointer to a char.

Prototype: ==void set_string(char **s, char *to);==

### 9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure

Create a file that contains the password for the crackme2 executable.

* Your file should contain the exact password, no new line, no extra space
* ltrace, ldd, gdb and objdump can help
* You may need to install the openssl library to run the crakme2 program: sudo apt install libssl-dev
* Edit the source list sudo nano /etc/apt/sources.list to add the following line: deb http://security.ubuntu.com/ubuntu xenial-security main Then sudo apt update and sudo apt install libssl1.0.0

* To begin, we can execute the crackme file to observe its behavior by navigating to the crackme directory and entering the following command:

```
 ./crackme
```
* The following will be printed to standard output:

```
Access Denied
```

This suggests that the crackme file cannot be run in the usual way. As a result, we need to determine the cause of this issue. However, before we can do that, we need to identify the type of file it is.

The file command is used to identify the type of a file. It does this by performing a series of tests in a specific order: filesystem tests, magic number tests, and language tests.

These tests are designed to determine the file's type based on its content and any metadata associated with it. If you want to use the file command to identify the type of a specific file, you can do so by running file [filename] in your terminal. For example:

```
$ file crackme
```

would show you the type of the file crackme is as:

```
crackme: ELF 64-bit LSB executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, for GNU/Linux 2.6.24, BuildID[sha1]=e06e0b0229279a69506925702a7f79e36bdc3eb2, not stripped
```

The information provided in the output of the file command reveals that the crackme file is:

* An executable file designed to be run on a 64-bit Linux operating system
Compiled for the x86–64 architecture and linked dynamically, meaning it relies on shared libraries to function

* Interpreted by the /lib64/ld-linux-x86–64.so.2 interpreter

* Built for GNU/Linux 2.6.24 and has a unique identifier called a “BuildID”
Has not been stripped, so it still contains debugging information and symbols that can be used for analysis.

ltrace is a utility that traces the dynamic library calls made by a program. Since we now know the file relies on shared libraries, ltrace can be used to analyze the crackme file. We may be able to see the specific library functions that the file calls and how they are used, which can provide additional insight into the behavior and purpose of the program.

We can run ltrace on the crack me file by entering the following command:

```
$ ltrace ./crackme
```

the output of the command will be as follows:

```
__libc_start_main(0x400876, 1, 0x7fff11752498, 0x400a60 <unfinished ...>
strncmp("HOSTNAME=f59e8821a191", "jennieandjayloveasm=", 20)                                = -34
strncmp("LANGUAGE=en_US:en", "jennieandjayloveasm=", 20)                                    = -30
strncmp("PWD=/alx-low_level_programming/0"..., "jennieandjayloveasm=", 20)                  = -26
strncmp("TZ=America/Los_Angeles", "jennieandjayloveasm=", 20)                               = -22
strncmp("HOME=/root", "jennieandjayloveasm=", 20)                                           = -34
strncmp("LANG=en_US.UTF-8", "jennieandjayloveasm=", 20)                                     = -30
strncmp("LS_COLORS=rs=0:di=01;34:ln=01;36"..., "jennieandjayloveasm=", 20)                  = -30
 ~ __libc_start_main(0x400876, 1, 0x7fff11752498, 0x400a60 <unfinished ...>
strncmp("HOSTNAME=f59e8821a191", "jennieandjayloveasm=", 20)                                = -34
strncmp("LANGUAGE=en_US:en", "jennieandjayloveasm=", 20)                                    = -30
strncmp("PWD=/alx-low_level_programming/0"..., "jennieandjayloveasm=", 20)                  = -26
strncmp("TZ=America/Los_Angeles", "jennieandjayloveasm=", 20)                               = -22
strncmp("HOME=/root", "jennieandjayloveasm=", 20)                                           = -34
strncmp("LANG=en_US.UTF-8", "jennieandjayloveasm=", 20)                                     = -30
strncmp("LS_COLORS=rs=0:di=01;34:ln=01;36"..., "jennieandjayloveasm=", 20)                  = -30
 ~ __libc_start_main(0x400876, 1, 0x7fff11752498, 0x400a60 <unfinished ...>
strncmp("HOSTNAME=f59e8821a191", "jennieandjayloveasm=", 20)                                = -34
strncmp("LANGUAGE=en_US:en", "jennieandjayloveasm=", 20)                                    = -30
strncmp("PWD=/alx-low_level_programming/0"..., "jennieandjayloveasm=", 20)                  = -26
strncmp("TZ=America/Los_Angeles", "jennieandjayloveasm=", 20)                               = -22
strncmp("HOME=/root", "jennieandjayloveasm=", 20)                                           = -34
strncmp("LANG=en_US.UTF-8", "jennieandjayloveasm=", 20)                                     = -30
strncmp("LS_COLORS=rs=0:di=01;34:ln=01;36"..., "jennieandjayloveasm=", 20)                  = -30
strncmp("LESSCLOSE=/usr/bin/lesspipe %s %"..., "jennieandjayloveasm=", 20)                  = -30
strncmp("TERM=xterm", "jennieandjayloveasm=", 20)                                           = -22
strncmp("LESSOPEN=| /usr/bin/lesspipe %s", "jennieandjayloveasm=", 20)                      = -30
strncmp("SHLVL=1", "jennieandjayloveasm=", 20)                                              = -23
strncmp("LC_ALL=en_US.UTF-8", "jennieandjayloveasm=", 20)                                   = -30
strncmp("PATH=/usr/local/sbin:/usr/local/"..., "jennieandjayloveasm=", 20)                  = -26
strncmp("OLDPWD=/alx-low_level_programmin"..., "jennieandjayloveasm=", 20)                  = -27
strncmp("_=/usr/bin/ltrace", "jennieandjayloveasm=", 20)                                    = -11
puts("Access Denied"Access Denied
)                                                                       = 14
+++ exited (status 1) +++

```
