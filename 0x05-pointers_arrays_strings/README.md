# 0x05. C - Pointers, arrays and strings

## Resources

**Read or watch:**

- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` `and -pedantic`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `holberton.h`
- Don’t forget to push your header file

## More Info

You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, `malloc` and `free` - yet.

## Quiz questions

<details>
<summary>Show</summary>
  
### Question #0
What is the size of a pointer to a char (on a 64-bit architecture)


1 byte


2 bytes


4 bytes


8 bytes

Question #1
What is the size of a pointer to an int (on a 64-bit architecture)


1 byte


2 bytes


4 bytes


8 bytes

Question #2
If we have a variable called var of type int, how can we get its address in memory?


*var


*(var)


&var

Question #3
What is the identifier to print an address with printf?


%a


%d


%p


%x

Question #4
The process of getting the value that is stored in the memory location pointed to by a pointer is called:


Pointing


Accessing


Dereferencing


Casting

Question #5
Is it possible to declare a pointer to a pointer?


Yes


No


It depends on the type the pointer is pointing to

Question #6
What happens when one tries to access an illegal memory location?


The operation is ignored


Segmentation fault


The computer shuts down


There’s a chance for the computer to catch fire, and sometimes even explode

Question #7
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

0


98


99


402

Question #8
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

p = 402;

0


98


99


402

Question #9
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

*p = 402;

0


98


99


402

Question #10
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

*p++;

0


98


99


402

Question #11
We declare the following variable

int arr[5];
What is the size in memory of the variable arr?


4 bytes


5 bytes


8 bytes


10 bytes


20 bytes


32 bytes

Question #12
We declare the following variable

int arr[5];
What is the equivalent of typing arr[2]?


arr + 2


*arr + 2


*(arr + 2)

</details>

## Tasks

<details>
<summary>View Contents</summary>



</details>

## Author
### _Edgar Miguel Rodríguez G._

- **Github:** [Miguelro123](https://github.com/Miguelro123) 
- **Linkedin:** [Edgar Miguel Rodriguez Garcia](https://www.linkedin.com/in/edgar-miguel-rodriguez-garcia-20a5281a2/)
