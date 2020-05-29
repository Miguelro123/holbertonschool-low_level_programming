# 0x0C. C - More malloc, free

## Resources

**Read or watch:**

- [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)

**man or help:**

- `exit (3)`
- `calloc`
- `realloc`

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- How to use the `exit` function
- What are the functions `calloc` and `realloc` from the standard library and how to use them

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

## Quiz questions

<details>
<summary>Show</summary>
  
### Question #0

To allocate enough space for an array of 10 integers (on a 64bit, Linux machine), I can use:

- [ ] malloc(64 * 10)
- [ ] malloc(10 * int)
- [x] malloc(10 * sizeof(int))

## Question #1

If I want to copy the string “Holberton” into a new space in memory, I can use this statement to reserve enough space for it (select all valid answers):

- [x] malloc(sizeof(“Holberton”))
- [ ] malloc(strlen(“Holberton”))
- [ ] malloc(9)
- [x] malloc(10)
- [ ] malloc(sizeof(“Holberton”) + 1)
- [x] malloc(strlen(“Holberton”) + 1)

### Question #2

malloc returns a pointer

- [x] True
- [ ] False

### Question #3

malloc returns an address

- [x] True
- [ ] False

### Question #4

What is wrong with this code:
```

int cp(void)
{
    char *s;

    s = malloc(10);
    strcpy(s, "Holberton");
    return (0);
}
```

- [ ] You don’t have enough space to store the copy of the string “holberton”
- [x] There is no comment
- [ ] You can’t call `strcpy` with a string literal
- [x] malloc can fail so we should check its return value all the time before using the pointers returned by the function.

### Question #5

You can do this:
```
free("Holberton");
```

- [ ] Yes
- [x] No

### Question #6

You can do this:
```
char str[] = "Holberton";

free (str);
```

- [ ] Yes
- [x] No

### Question #7
 
You can do this:
```
char *s;

s = strdup("Holberton");
if (s != NULL)
{
    free(s);
}
```

- [x] Yes
- [ ] No

### Question #8

The memory space reserved when calling `malloc` is on:

- [ ] The stack
- [x] The heap

### Question #9

What will you see on the terminal?
```
int main(void)
{
    int *ptr;

    *ptr = 98;
    printf("%d\n", *ptr);
    return (0);
}
```

- [ ] 0
- [ ] 98
- [ ] It doesn’t compile
- [x] Segmentation Fault

</details>

## Tasks

<details>
<summary>View Contents</summary>



</details>

## Author
### _Edgar Miguel Rodríguez G._

- **Github:** [Miguelro123](https://github.com/Miguelro123) 
- **Linkedin:** [Edgar Miguel Rodriguez Garcia](https://www.linkedin.com/in/edgar-miguel-rodriguez-garcia-20a5281a2/)
