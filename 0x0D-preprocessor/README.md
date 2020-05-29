# 0x0D. C - Preprocessor

### Resources

**Read or watch:**

- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
- [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
- [Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
- [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
- [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
- [include guard](https://en.wikipedia.org/wiki/Include_guard)
- [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- What are macros and how to use them
- What are the most common predefined macros
- How to include guard your header files

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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `holberton.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Quiz questions

<details>
<summary>Show</summary>
  
### Question #0

What are the steps of compilation?

- [ ] compiler 2. preprocessor 3. assembler 4. linker
- [x] preprocessor 2.compiler 3. assembler 4. linker
- [ ] preprocessor 2.compiler 3. linker 4. assembler

### Question #1

The preprocessor generates assembly code

- [ ] True
- [x] False

### Question #2

The preprocessor generates object code

- [ ] True
- [x] False

### Question #3

The preprocessor links our code with libraries.

- [ ] True
- [x] False

### Question #4

This portion of code is actually using the library stdlib.
```
#include <stdlib.h>
```

- [ ] True
- [x] False

### Question #5

The preprocessor removes all comments

- [x] True
- [ ] False

### Question #6

What is the `gcc` option that runs only the preprocessor?

- [ ] -a
- [ ] -P
- [ ] -p
- [ ] -pedantic
- [x] -E
- [ ] -cisfun
- [ ] -preprocessor

### Question #7

`NULL` is a macro

- [x] True
- [ ] False

Question #8
What will be the last 5 lines of the output of the command `gcc -E` on this code?
```
#include <stdlib.h>

int main(void)
{
    NULL;
    return (EXIT_SUCCESS);
}
```

- [ ] <pre>int main(void)
{
 0;
 return (0);
}
</pre>

- [ ] <pre>int main()
{
 0;
 return (0);
}
</pre>

- [x] <pre>int main(void)
{
 ((void *)0);
 return (0);
}
</pre>

- [ ] <pre>int main(void)
{
 '\0';
 return (0);
}
</pre>

### Question #9

This code will try to allocate 1024 bytes in the heap:
```
#define BUFFER_SIZE 1024
malloc(BUFFER_SIZE)
```

- [x] True
- [ ] False

### Question #10

What does the macro `TABLESIZE` expand to?
```
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37
```

- [ ] 1020
- [x] 37
- [ ] nothing

### Question #11

This is the correct way to define the macro `SUB`:
```
#define SUB(a, b) a - b
```

- [ ] Yes
- [ ] No, it should be written this way:
```
#define SUB(a, b) (a - b)
```
- [ ] No, it should be written this way:
```
#define SUB(a, b) (a) - (b)
```
- [x] No, it should be written this way:
```
#define SUB(a, b) ((a) - (b))
```

### Question #12

Why should we use include guards in our header files?

- [ ] Because Holberton said so, and we should never ask why.
- [x] To avoid the problem of double inclusion when dealing with the include directive.

### Question #13

The macro `__FILE__` expands to the name of the current input file, in the form of a C string constant.

- [x] True
- [ ] False

### Question #14

What will be the output of this program? (on a standard 64 bits, Linux machine)
```
#include <stdio.h>
#include <stdlib.h>

#define int char

int main(void)
{
    int i;

    i = 5;
    printf ("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}
```

- [ ] Segmentation Fault
- [ ] It does not compile
- [ ] sizeof(i) = 8
- [ ] sizeof(i) = 5
- [ ] sizeof(i) = 4
- [x] sizeof(i) = 1

</details>

## Tasks

<details>
<summary>View Contents</summary>



</details>

## Author
### _Edgar Miguel Rodríguez G._

- **Github:** [Miguelro123](https://github.com/Miguelro123) 
- **Linkedin:** [Edgar Miguel Rodriguez Garcia](https://www.linkedin.com/in/edgar-miguel-rodriguez-garcia-20a5281a2/)
