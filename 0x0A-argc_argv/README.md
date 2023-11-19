# 0x0A. C - argc, argv

In C programming, argc and argv are special variables used to access command-line arguments passed to a program when it is executed. They are typically used in the main() function, which is the entry point for all C programs.

argc stands for "argument count" and is an integer variable that holds the total number of arguments passed to the program, including the program name itself.

argv stands for "argument vector" and is a one-dimensional array of character pointers. Each element of the array points to a null-terminated string representing one of the arguments passed to the program.

The first element of the argv array, argv[0], always contains the name of the program itself. The remaining elements, argv[1], argv[2], and so on, contain the additional arguments provided on the command line.

Here is an example of how to use argc and argv to print all the command-line arguments to the console:

``` C
int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }
  return 0;
}
```

In this example, the for loop iterates over the argv array, printing each argument to the console using the printf() function.

Using argc and argv allows you to customize the behavior of your C programs based on the input provided by the user on the command line. This is a powerful feature that can add flexibility and versatility to your programs.

## Resources

### Read or watch:

* [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
* [argc and argv](https://crasseux.com/books/ctutorial/argc-and-argv.html)
* [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
* [how to compile with unused variables](https://www.google.com/search?q=unused+variable+C&sca_esv=570134643&sxsrf=AM9HkKmZiv20zz8lyzQUnoxMLiw2xETZDQ%3A1696286016559&source=hp&ei=QEUbZfT_H9L87_UPjpuWiAo&iflsig=AO6bgOgAAAAAZRtTUBQX3zmNAI7uRUCFoP2hupu4Eewc&ved=0ahUKEwj0n8_rtdiBAxVS_rsIHY6NBaEQ4dUDCAo&uact=5&oq=unused+variable+C&gs_lp=Egdnd3Mtd2l6IhF1bnVzZWQgdmFyaWFibGUgQ0gAUABYAHAAeACQAQCYAQCgAQCqAQC4AQPIAQA&sclient=gws-wiz)
* [What are command line arguments (argc and argv)?](https://www.youtube.com/watch?v=decAHMKIo_A)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

* How to use arguments passed to your program
* What are two prototypes of main that you know of, and in which case do you use one or the other
* How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

## Tasks

### 0. It ain't what they call you, it's what you answer to

* Write a program that prints its name, followed by a new line.

### 1. Silence is argument carried out by other means

* Write a program that prints the number of arguments passed into it.

### 2. The best argument against democracy is a five-minute conversation with the average voter

* Write a program that prints all arguments it receives.

### 3. Neither irony nor sarcasm is argument

* Write a program that multiplies two numbers.

### 4. To infinity and beyond

* Write a program that adds positive numbers.

### 5. Minimal Number of Coins for Change

* Write a program that prints the minimum number of coins to make change for an amount of money.
