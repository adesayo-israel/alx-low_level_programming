QUIZ SOLUTIONS

QUESTION ONE: Which one is a pointer to a function?


(int *)func(int a, float b);


int func(int a, float b);


int (*func)(int a, float b);


int *func(int a, float b);

ANSWER: The correct option that represents a pointer to a function is:

int (*func)(int a, float b);

This is a declaration of a function pointer func that takes two arguments, an integer a and a float b, and returns an integer. The (*func) syntax tells us that func is a pointer to a function. This allows us to assign different functions to func at runtime and call them through the pointer.

QUESTION TWO: What does a pointer to a function point to (check all correct answers if there is more than one)?


The first byte of code of the function


data


The first character of the name of the function


code

ANSWER: A pointer to a function points to code. This means that the correct answer is: 
Code and The first byte of code of the function

When a pointer to a function is created, it points to the memory location where the code for that function is stored. When the pointer is used to call the function, it transfers control to that location in memory and executes the code.

The first byte of code of the function: this is essentially the same as "code," so it could be considered correct as well. However, it's important to note that a pointer to a function points to the entire code of the function, not just the first byte.

The other options listed are incorrect:
Data: a pointer to a function does not point to data, it points to code.
The first character of the name of the function: a pointer to a function does not point to the name of the function, it points to the code that makes up the function.

QUESTION THREE: To store the address of this function:

void neyo(void);

to the variable f of type pointer to a function that does not take any argument and does not return anything, you would do (check all correct answers if there is more than one):


*f = &neyo;


f = neyo;


*f = neyo;


f = &neyo;


ANSWER: To store the address of the function neyo to the variable f of type pointer to a function that does not take any argument and does not return anything, you would do:

f = &neyo;

This assigns the address of neyo to the variable f, which is of type pointer to a function that takes no arguments and returns nothing. This means that f can now be used to call the function neyo by dereferencing the pointer, like this: (*f)();.

f = neyo;
I kind of feel this is invalid because neyo is a function, not a memory address but according to ALX it is correct, Also, f is a pointer to a function, so it must store a memory address (the address of neyo), not the function itself.

The other options are incorrect:

*f = &neyo;: This is invalid because *f is not yet initialized to point to any valid memory location. Also, &neyo has a different type than *f (pointer to function vs function pointer).

*f = neyo;: This is invalid because *f is not yet initialized to point to any valid memory location. Also, neyo is a function, not a memory address, so it cannot be assigned to a function pointer.


QUESTION FOUR: If f is a pointer to a function that takes no parameter and returns an int, you can call the function pointed by f this way (check all correct answers if there is more than one):


f;


f();


(*f)();

ANSWER: To call the function pointed to by f, which is a pointer to a function that takes no parameters and returns an int, you can do:

(*f)();: This is the correct way to call the function pointed to by f. The parentheses around *f are necessary to dereference the pointer before calling the function.

f;: This is not a valid way to call a function. It simply evaluates the value of the pointer f, but does not call the function it points to.

f();: This is also a valid way to call a function that takes no parameters. The parentheses after f are used to pass arguments to the function, buti feel that since the function takes no parameters, they are unnecessary and would cause a syntax error.


QUESTION FIVE: This void (*anjula[])(int, float) is:


A pointer to an array of functions that take an int and a float as parameters and returns nothing


A pointer to a function that takes an int and a float as parameters and returns nothing


An array of pointers to functions that take an int and a float as parameters and returns nothing


A pointer to a function that takes an int and a float as parameters and returns an empty array


A pointer to a function that takes an array of int and float as a parameter and returns nothing

ANSWER: The declaration void (*anjula[])(int, float) is an array of pointers to functions that take an int and a float as parameters and return nothing.

The syntax for declaring an array of function pointers is similar to the syntax for declaring a function pointer, except that it uses square brackets to indicate that it is an array. In this case, anjula is an array of unknown size (because no size is specified in the declaration), where each element of the array is a pointer to a function that takes an int and a float as parameters and returns nothing.

