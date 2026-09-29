# 🖨️ 42_ft_Printf

A custom implementation of the standard C library `printf` function, developed for the 42 School curriculum (noted as a project reupload). This project explores variadic arguments in C and recreates the core functionality of formatting and printing data to the standard output.

## 📁 Project Structure

The repository is built primarily in C (87.2%) and utilizes a Makefile (12.8%) for compilation. It contains the following modular source files used to build the custom `ft_printf` function:

* `ft_printf.c` - The core logic and variadic argument parsing for the `ft_printf` function.
* `ft_printchar.c` - Helper functions dedicated to printing single characters and strings.
* `ft_printnbr.c` - Helper functions for formatting and printing numbers.
* `ft_printfpointer.c` - Helper functions for formatting and printing memory addresses and pointers.
* `ft_putchar.c` - A basic utility to output a single character to standard output.
* `ft_printf.h` - The header file containing function prototypes and necessary macros or includes.
* `Makefile` - The build script used to compile the source files[cite: 4].
* `main.c` - A test file included to run and verify the functionality of your custom `ft_printf`.

## 🚀 Getting Started

### Prerequisites
* GCC compiler
* Make

### Installation & Compilation

1. Clone the repository:
   ```bash
   git clone [https://github.com/Arkarchanmyae123/42_ft_Printf.git](https://github.com/Arkarchanmyae123/42_ft_Printf.git)
   cd 42_ft_Printf
