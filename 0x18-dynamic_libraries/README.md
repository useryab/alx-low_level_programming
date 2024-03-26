# 0x18. C - Dynamic libraries

**Dynamic Libraries (Shared Libraries)**

In C programming, dynamic libraries (also known as shared libraries) offer a way to organize reusable code functionalities that can be loaded and shared by multiple programs at runtime. This contrasts with static libraries, where the library code is directly incorporated into the executable file during compilation.

**Benefits of Dynamic Libraries:**

- **Reduced Executable Size:** Programs that utilize dynamic libraries are generally smaller because they don't carry their own copies of the library code. This can be especially beneficial for large libraries or when distributing software.
- **Memory Efficiency:** Since multiple programs can share a single instance of the dynamic library in memory, it reduces overall memory consumption on the system.
- **Code Maintainability:** Updates to the dynamic library can potentially benefit all programs that use it, as long as the library's interface (function names and signatures) remains compatible. This simplifies maintenance and reduces the need to recompile individual programs for minor library changes.

**Creating Dynamic Libraries:**

The specific steps for creating dynamic libraries vary depending on the operating system and compiler you're using. However, here's a general outline:

1. **Compile Source Files:** Compile your C source code files into object files using the compiler's standard compilation flags.
2. **Position-Independent Code (PIC):** Ensure your code is position-independent by using the compiler flag `-fPIC` (or its equivalent on your system) during compilation. This is crucial because the dynamic library's code might be loaded at different memory addresses by different programs at runtime.
3. **Link as Shared Library:** Use the linker's flag `-shared` (or its equivalent) during the linking stage to instruct the linker to create a shared library instead of an executable file. The resulting file typically has a `.so` extension on Linux-based systems and `.dll` on Windows.

**Using Dynamic Libraries:**

To use a dynamic library in your C program, you'll need to:

1. **Include Header File:** Include the header file that declares the functions and variables provided by the library. This header file should be part of the library's distribution.
2. **Link with Library:** During the linking stage of your program's compilation, use the linker flag `-l<library_name>` (or its equivalent) to specify the dynamic library you want to link against. `<library_name>` is usually the name of the library without the prefix (`lib` on Linux-based systems) and the extension.

**Example (Linux/gcc):**

Assuming you have a dynamic library named `mylib.so` that exports a function `add_numbers`, here's how you might use it in your C program:

```c
#include <stdio.h>
#include "mylib.h" // Header file for mylib.so

int main() {
    int a = 5, b = 10;
    int result = add_numbers(a, b);
    printf("Sum: %d\n", result);
    return 0;
}

// Compile and link:
gcc main.c -o myprogram -L. -lmylib
```

In this example:

- `#include "mylib.h"`: Includes the header file that declares `add_numbers`.
- `gcc main.c -o myprogram -L. -lmylib`: The compilation command links `main.c` with `mylib.so`.
    - `-L.`: Specifies the current directory to search for libraries (adjust if required).
    - `-lmylib`: Links against the library `mylib`.

**Key Considerations:**

- **Dynamic Library Loading:** The operating system's dynamic linker is responsible for loading dynamic libraries at runtime when a program requests them.
- **Versioning:** It's essential to consider versioning for dynamic libraries to ensure compatibility when updates are made. Different versioning schemes can help prevent incompatibilities between programs and library versions.
- **Dependency Management:** When distributing software that relies on dynamic libraries, it's important to ensure that the necessary libraries are available on the target system or provide a mechanism to include them with your application.

By effectively using dynamic libraries, you can create more modular, efficient, and maintainable C programs.

## Resources


## Learning Objectives

* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
Basic usage nm, ldd, ldconfig

## Tasks

0. A library is not a luxury but one of the necessities of life

1. Without libraries what have we? We have no past and no future

2. Let's call C functions from Python

3. Code injection: Win the Giga Millions!
