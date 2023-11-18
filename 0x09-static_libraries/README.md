# 0x09. C - Static libraries

In C programming, a static library is a collection of compiled object files (.o) that are linked into the executable file during the linking phase of compilation. Unlike dynamic libraries, static libraries are not loaded into memory at runtime; instead, the code from the static library is incorporated directly into the executable file. This makes static libraries more self-contained and less dependent on external dependencies.

## Benefits of static libraries:

* Self-contained: Static libraries don't require the presence of any external shared libraries at runtime, making them more portable and less prone to runtime errors caused by missing or incompatible library versions.

* Faster startup time: Since the code from the static library is already embedded in the executable, there's no need to load it from disk at runtime, leading to faster startup times.

* Smaller memory footprint: Static libraries can reduce the overall memory footprint of the application, as the code is not shared among multiple processes.

## Drawbacks of static libraries:

* Increased executable size: Incorporating the code from the static library into the executable can increase the size of the executable file, which can be a concern for applications that need to be small and lightweight.

* Dependency management: Changes made to the static library require recompilation of all applications that rely on it, making it more difficult to manage dependencies and update libraries across multiple projects.

## When to use static libraries:

Static libraries are well-suited for situations where:

* Portability is crucial: Static libraries are less prone to runtime errors caused by missing or incompatible shared libraries, making them more suitable for cross-platform development and environments with limited control over the system's library configuration.

* Startup time is critical: Static libraries can reduce startup time by eliminating the need to load shared libraries at runtime.

* Memory usage is a concern: Static libraries can reduce overall memory consumption by not sharing code among multiple processes.

## When to use dynamic libraries:

Dynamic libraries are better suited for situations where:

* Frequently updated libraries: Dynamic libraries allow for easier updating of shared code without recompiling all dependent applications.

* Reducing executable size: Dynamic libraries can reduce the size of executables by sharing code among multiple processes.

* Efficient memory usage: Dynamic libraries allow for more efficient memory usage by sharing code among multiple processes.

In summary, static libraries and dynamic libraries each have their own strengths and weaknesses. The choice of which type of library to use depends on the specific requirements of the application.

## Concepts

For this project, we expect you to look at this concept:

* [C static libraries](https://medium.com/@StueyGK/what-is-c-static-library-fb895b911db1)

## General

* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm

## Resources :books:

### Read or watch:

* [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
* [Creating A Static “C” Library Using “ar” and “ranlib”](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
* [Using A “C” Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
* [What is difference between Dynamic and Static library(Static and Dynamic linking) (stop at 4:44)](https://www.youtube.com/watch?v=eW5he5uFBNM)
* [ar command in Linux with examples](https://www.geeksforgeeks.org/ar-command-in-linux-with-examples/)
* [ranlib command in Linux with Examples](https://www.geeksforgeeks.org/ranlib-command-in-linux-with-examples/?ref=gcse)
* [10 Practical Linux nm Command Examples](https://www.thegeekstuff.com/2012/03/linux-nm-command/)
* [How to write your own code libraries in C.](https://www.youtube.com/watch?v=JbHmin2Wtmc)
* [Code Libraries - Computerphile](https://www.youtube.com/watch?v=FQAQTXE_vt4)
* [Advanced Linux Programming](https://www.youtube.com/playlist?list=PLbu9W4c-C0iDbcWZxA1JUawtUeln0eME9)
* [Static vs. Shared Libraries](https://www.youtube.com/watch?v=-vp9cFQCQCo)
* [Differences between static and dynamic libraries](https://www.linkedin.com/pulse/differences-between-static-dynamic-libraries-gil-posada)

## Why using libraries in general

A library in C is a collection of objects files exposed for use and build other programs, so instead of re-write sections of code we bring back information that is already existing, this is where it comes to the concept of a library. In C exist two kinds of libraries the first ones are the static that allows us to link to the program and are not relevant during the runtime, and the other ones are called dynamic libraries those are preferable use when you run a lot of programs at the same time who are using the same library


## Creating A Static "C" Library Using "ar" and "ranlib"

The basic tool used to create static libraries is a program called 'ar', for 'archiver'. This program can be used to create static libraries (which are actually archive files), modify object files in the static library, list the names of object files in the library, and so on. In order to create a static library, we can use a command like this:

```
ar rc libutil.a util_file.o util_net.o util_math.o
```

![Differences between static and dynamic libraries!](https://media.licdn.com/dms/image/C4D12AQFgOwI9oOkIHQ/article-inline_image-shrink_400_744/0/1608003397374?e=1700697600&v=beta&t=jh8oyvhXibXgCWX8rkxOEHYlK-DGCo3kW0VjIKyTb7Q)

This command creates a static library named 'libutil.a' and puts copies of the object files "util_file.o", "util_net.o" and "util_math.o" in it. If the library file already exists, it has the object files added to it, or replaced, if they are newer than those inside the library. The 'c' flag tells ar to create the library if it doesn't already exist. The 'r' flag tells it to replace older object files in the library, with the new object files.

After an archive is created, or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library, and to make sure that the order of the symbols in the library won't matter during compilation (this will be better understood when we take a deeper look at the link process at the end of this tutorial). The command used to create or update the index is called 'ranlib', and is invoked as follows:

```
ranlib libutil.a
```

On some systems, the archiver (which is not always ar) already takes care of the index, so ranlib is not needed (for example, when Sun's C compiler creates an archive, it is already indexed). However, because 'ar' and 'ranlib' are used by many makefiles for many packages, such platforms tend to supply a ranlib command that does nothing. This helps using the same makefile on both types of platforms.

Note: when an archive file's index generation date (stored inside the archive file) is older than the file's last modification date (stored in the file system), a compiler trying to use this library will complain its index is out of date, and abort. There are two ways to overcome the problem:

* 1 Use 'ranlib' to re-generate the index.

* 2 When copying the archive file to another location, use 'cp -p', instead of only 'cp'. The '-p' flag tells 'cp' to keep all attributes of the file, including its access permissions, owner (if "cp" is invoked by a superuser) and its last modification date. This will cause the compiler to think the index inside the file is still updated. This method is useful for makefiles that need to copy the library to another directory for some reason.


## Tasks

###  0. A library is not a luxury but one of the necessities of life

Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

### 1. Without libraries what have we? We have no past and no future

Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
