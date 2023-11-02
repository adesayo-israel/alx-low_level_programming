0x0A. C - argc, argv
C programming
How to use arguments passed to your program
What are two prototypes of main that you know of, and in which case do you use one or the other
How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
You are allowed to use the standard library
In the following command, what is argv[2]?
$ ./argv "My School is fun"
NULL

What is argc?
The number of command line arguments
The size of the argv array

In the following command, what is argv[2]?
$ ./argv My School is fun
School

What is argv?
An array of size argc
An array containing the program command line arguments

What is argv[0]
The program name

What is argv[argc]?
NULL

In the following command, what is argv[2]?
$ ./argv "My School" "is fun"
is fun
