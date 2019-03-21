# Libft
Open source C library functions specific for 42 Silicon Valley

## Introduction to Libft:
This first project marks the beginning of your training at [42 Silicon Valley](https://www.42.us.org/) to become de software engineer.

The goal of the `libft` project is to build on the concepts you learned during `Day-06` of the [Piscine Bootcamp](https://www.42.us.org/program/piscine/) by coding a library of useful functions that you will be allowed to reuse in most of your C projects this year. 

The C Standard Library is a set of C built-in functions, constants and header files like `<stdio.h>`, `<stdlib.h>`, `<math.h>`, etc. This project has certain restrictions that prohibit the use of these standard C libraries. 
Because we don't have access to those highly useful standard functions, we have to re-write those functions, to understand them and to learn how to use them currently. 

## Objectives:
C programming can be very tedious when one doesn’t have access to those highly useful standard functions. This project makes you to take the time to re-write those functions, understand them, and learn to use them. This library will help you for all your future C projects.

Through this project, we have the opportunity to expand the list of functions with your own that will be used throughout the year. 

### Goal:
The `Libft` project incorporates very useful functions, including binary trees, linked lists, stacks, arrays, bit manipulation, and more. By developing this library, I'm seeking to gain a thorough understanding of data structures, algorithms, unit testing, continuous integration, troubleshooting, and proper documentation.

## Getting Started
### Compiling
Run the following commands:

- To compile
`make`

- To remove objects:
`make clean`

- To remove objects and binary file (program):
`make fclean`

- To re-compile:
`make re`

- Executing
To test the library, compile with your program. i.e.

`./program libft.a`

## Known Issues
Currently fixing compilation errors due to some missing functions.

## General Instructions
- You must create the following functions in the order you believe makes most sense. We encourage you to use the functions you have already coded to write the next ones. The difficulty level does not increase by assignment and the project has not
been structured in any specific way. It is similar to a video game, where you can complete quests in the order of your choosing and use the loot from the previous quests to solve the next ones.
- Your project must be written in accordance with the [Norm](https://github.com/Gegel85/norminette).
- Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the defence.
- All heap allocated memory space must be properly freed when necessary.
- You must submit a file named author containing your username followed by a `’\n'` at the root of your repository,

```c
$>cat -e author
xlogin$
```
- You must submit a C file for each function you create, as well as a `libft.h` file, which will contain all the necessary prototypes as well as `macros` and `typedefs` you might need. All those files must be at the root of your repository.
- You must submit a `Makefile` which will compile your source files to a static library `libft.a`.
- Your `Makefile` must at least contain the rules `$(NAME)`, `all`, `clean`, `fclean` and `re` in the order that you will see fit.
- Your `Makefile` must compile your work with the flags `-Wall, -Wextra and -Werror`.
- Only the following libc functions are allowed : `malloc(3)`, `free(3)` and `write(2)`, and their usage is restricted. See below.
- You must include the necessary include system files to use one or more of the three authorized functions in your `.c files`. The only additional system include file you are allowed to use is `string.h` to have access to the constant `NULL` and to the type `size_t`. Everything else if forbidden.
- We encourage you to create test programs for your library even though this work **won’t have to be submitted and won’t be graded.** It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. Indeed, during defence, you are free to use your tests and/or the tests of the peer you are evaluating.

### Contributors
[Fred Siika](https://github.com/fredsiika/)

### Credits
The test framework and some libft tests are based on the work done by [jgigault](https://github.com/jgigault/42FileChecker). Thanks to all contributors.
