# 0x07. C - Even more pointers, arrays and strings

## Resources

**Read or watch:**

- [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
- [C – Pointer to Pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
- [Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
- [Two dimensional (2D) arrays in C programming with example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

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

You do not need to learn about pointers to functions, arrays of structures, `malloc` and `free` - yet.

## Quiz questions

<details>
<summary>Show</summary>
  
### Question #0

What is the size of `p` in this code?
```
int *p;
```

- [ ] 4 bytes
- [x] 8 bytes
- [ ] 16 bytes

### Question #1

What is the size of p in this code?
```
int **p;
```

- [ ] 4 bytes
- [x] 8 bytes
- [ ] 16 bytes

### Question #2

In this following code, what is the value of `a[0][0]`?
```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

- [x] 1
- [ ] 2
- [ ] 3
- [ ] 4

### Question #3

In this following code, what is the value of a`[3][0]`?
```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

- [x] 7
- [ ] 8
- [ ] {7, 8}
- [ ] 5

### Question #4

In this following code, what is the value of `a[3][1]`?
```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

- [ ] 7
- [ ] 9
- [ ] {7, 8}
- [x] 8

### Question #5

In this following code, what is the value of `a[1][1]`?
```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

- [ ] 1
- [ ] 2
- [ ] 3
- [x] 4

### Question #6

What is the size of `*p` in this code?
```
int **p;
```

- [ ] 4 bytes
- [x] 8 bytes
- [ ] 16 bytes

### Question #7

What is the size of `*p` in this code?
```
int *p;
```

- [x] 4 bytes
- [ ] 8 bytes
- [ ] 16 bytes

### Question #8

What is stored inside a pointer to a pointer to an int?

- [ ] An address where an int is stored
- [ ] An int
- [x] An address where an address is stored

</details>

## Tasks

<details>
<summary>View Contents</summary>



</details>

## Author
### _Edgar Miguel Rodríguez G._

- **Github:** [Miguelro123](https://github.com/Miguelro123) 
- **Linkedin:** [Edgar Miguel Rodriguez Garcia](https://www.linkedin.com/in/edgar-miguel-rodriguez-garcia-20a5281a2/)
