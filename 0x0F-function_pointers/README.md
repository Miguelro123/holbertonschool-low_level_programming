# 0x0F. C - Function pointers

## Resources

**Read or watch:**

- [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
- [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
- [why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s&feature=youtu.be)
- [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

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
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `function_pointers.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Quiz questions

<details>
<summary>Show</summary>
  
### Question #0

Which one is a pointer to a function?

- [ ] int func(int a, float b);
- [ ] int *func(int a, float b);
- [x] int (*func)(int a, float b);
- [ ] (int *)func(int a, float b);

### Question #1

To store the address of this function:
```
void neyo(void);
```
to the variable `f` of type pointer to a function that does not take any argument and does not return anything, you would do (check all correct answers if there is more than one):

- [x] f = neyo;
- [x] f = &neyo;
- [ ] *f = neyo;
- [ ] *f = &neyo;

### Question #2

If `f` is a pointer to a function that takes no parameter and returns an `int`, you can call the function pointed by `f` this way (check all correct answers if there is more than one):

- [x] f();
- [x] (*f)();
- [ ] f;

### Question #3

This `void (*anjula[])(int, float)` is:

- [ ] A pointer to a function that takes an int and a float as parameters and returns nothing
- [ ] A pointer to a function that takes an array of int and float as a parameter and returns nothing
- [ ] A pointer to a function that takes an int and a float as parameters and returns an empty array
- [x] An array of pointers to functions that take an int and a float as parameters and returns nothing
- [ ] A pointer to an array of functions that take an int and a float as parameters and returns nothing

### Question #4

What does a pointer to a function point to (check all correct answers if there is more than one)?

- [ ] data
- [x] code
- [ ] The first character of the name of the function
- [x] The first byte of code of the function

</details>

## Tasks

<details>
<summary>View Contents</summary>



</details>

## Author
### _Edgar Miguel Rodríguez G._

- **Github:** [Miguelro123](https://github.com/Miguelro123) 
- **Linkedin:** [Edgar Miguel Rodriguez Garcia](https://www.linkedin.com/in/edgar-miguel-rodriguez-garcia-20a5281a2/)
