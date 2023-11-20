# 0x0B. C - malloc, free

## malloc

The malloc function is used to dynamically allocate memory during program execution. It takes a single argument, which is the size of the memory block to allocate, in bytes. The function returns a void pointer to the allocated memory block.

If the requested memory block cannot be allocated, malloc returns a null pointer. This indicates that there is not enough memory available to satisfy the request.

Example:

```C
int *numbers = malloc(sizeof(int) * 10);
if (numbers == NULL) {
  printf("Error: Memory allocation failed.\n");
  exit(1);
}
```
This code allocates 10 integers worth of memory and stores the pointer to the allocated memory block in the numbers variable. The `sizeof(int)` expression evaluates to the number of bytes required to store one integer.

## free

The free function is used to deallocate memory that was previously allocated using malloc. It takes a single argument, which is the pointer to the memory block to be freed.

When a memory block is freed, it becomes available for reuse by other allocations. It is important to free memory that is no longer needed to prevent memory leaks.

Example:

```C
free(numbers);
```
This code frees the memory block that was previously allocated to the numbers variable. After this code is executed, the numbers variable should not be used to access the freed memory.

## Memory Leaks

A memory leak occurs when memory is allocated but not freed. This can lead to problems such as program crashes and system instability. It is important to carefully manage dynamic memory allocation to avoid memory leaks.

Here are some tips for avoiding memory leaks:

* Always free memory that is no longer needed.
* Use a memory profiler to identify and fix memory leaks.
* Be careful not to lose pointers to allocated memory.
By following these tips, you can help to prevent memory leaks and ensure that your C programs run smoothly.

Valgrind is a memory debugger that can be used to detect memory leaks in C programs. It works by simulating the execution of a program and tracking all memory allocations and deallocations. If a memory block is allocated but not freed, Valgrind will report it as a memory leak.

To use Valgrind to detect memory leaks in a C program, follow these steps:

`Compile your program with the -g flag`. This flag tells the compiler to generate debugging information, which is necessary for Valgrind to work properly.
Run your program under Valgrind with the `--leak-check=yes `flag. This flag tells Valgrind to enable its memory leak detection feature.
Valgrind will print a report to the console listing any memory leaks that it detects. The report will include information about the size of the leaked memory block, the line of code where it was allocated, and the line of code where it should have been freed.
Here is an example of how to run a C program under Valgrind:

## Bash

`valgrind --leak-check=yes ./myprogram`

This command will run the program myprogram under Valgrind and print a report to the console listing any memory leaks that it detects.

If Valgrind reports a memory leak, you will need to find the code that is responsible for the leak and fix it. To do this, you can use the information in the Valgrind report to identify the line of code where the memory block was allocated. Then, you can trace the code to find the line of code where it should have been freed.

Once you have identified the code that is responsible for the leak, you can fix it by adding a call to the free() function to free the memory block.

Here is an example of how to fix a memory leak:

```C
// Before:
void *myFunction() {
  int *numbers = malloc(sizeof(int) * 10);
  // ...

  return numbers;
}

// After:
void *myFunction() {
  int *numbers = malloc(sizeof(int) * 10);
  // ...

  free(numbers);
  return numbers;
}
```
In this example, the memory leak is fixed by adding a call to the `free() function` to free the numbers memory block before the function returns.

By following these steps, you can use Valgrind to detect and fix memory leaks in your C programs. This can help to improve the performance and stability of your programs.

## Resources

### Read or watch: 📚

* [0x0a - malloc & free - quick overview.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231003%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231003T221600Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9d615e0a203d00d4bfacb6d1bf43301ceabecbdfcf082e45e5b669d95e2bb8c8)
* [Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)](https://www.youtube.com/watch?v=xDVC3wKjS64)
* [How to use valgrind ](https://www.youtube.com/watch?v=A5Rc4AwdaOA)
* [C Dynamic Memory Debugging with Valgrind](https://www.youtube.com/watch?v=bb1bTJtgXrI)
* [Dynamic memory allocation in C - malloc calloc realloc free](https://youtu.be/xDVC3wKjS64?si=rrhK3_TceBkZg-LV)
* [Dynamic Memory Allocation in C Programming Explained | ALX PLD DISCUSSION](https://www.youtube.com/watch?v=-za3kDtaMvY)
* [What is Dynamic Memory Allocation?](https://www.geeksforgeeks.org/what-is-dynamic-memory-allocation/)
* [Dynamic Memory Allocation in C using malloc(), calloc(), free() and realloc()](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)


## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak

## Tasks

### 0. Float like a butterfly, sting like a bee

Write a function that creates an array of chars, and initializes it with a specific char.

### 1. The woman who has no imagination has no wings

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

### 2. He who is not courageous enough to take risks will accomplish nothing in life

Write a function that concatenates two strings.

### 3. If you even dream of beating me you'd better wake up and apologize

Write a function that returns a pointer to a 2 dimensional array of integers.

### 4. It's not bragging if you can back it up

Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

Write a function that concatenates all the arguments of your program.

### 6. I will show you how great I am

Write a function that splits a string into words.

