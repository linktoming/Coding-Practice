# Summary of C Language
C is a small and compact langage that has advantages in lots of areas.  
I'm re-learn it for coding practice and for learning algorithms.   
To me, it has a healthy balance between low level macheine structures and high level abstractions that we can get out of the simple yet powerful C.

## What C Provides Us
In C, we have the following __basic data types__

- int: integer
- short: short integer
- long: long integer
- float: floating point
- double: double-precision floating point
- char: character - a single byte
- character string or string constant: "Hello World!" 

We also have _arrays_, _structures_ and _unions_ of these basic data types, _pointers_ to them and _functions_ that receivet them as parameters or return them.

## Rules in C
- In C, all variables must be declared before they are used.

## Basic Tasks and Their Syntax
- _Declaration_: A declaration announces the properties of variables.

  ```
  int fahr, celsius;
  int lower, upper, step;
  ```
- _Assignment statements_: 

  ```
  lower = 0;  upper = 300;  step = 20;
  ```
- end of list

## Conversion Characters for printf

| Conversion Character | Meaning |
| :------------- | :------------- |
| %d | print as decimal integer |
| %6d | print as decimal integer, at least 6 characters wide || %f | print as floating point |
| %6f | print as floating point, at least 6 characters wide |
| %.2f | print as floating point, 2 characters after decimal point |
| %6.2f | ￼print as floating point, at least 6 wide and 2 after decimal poi |
| %o | for octal |
| %x | hexadecimal |
| %c | character |
| %s | character string |
| %% | for % itself |


## Interesting Facts of C
- > By the way, printf is not part of the C language; there is no input or output defined in C itself. printf is just a useful function from the standard library of functions that are normally accessible to C programs. The behaviour of printf is defined in the ANSI standard, however, so its properties should be the same with any compiler and library that conforms to the standard.

- end of list

## References
_The C Programming Language (Second Edition)_