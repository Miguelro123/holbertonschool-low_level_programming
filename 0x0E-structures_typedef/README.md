# 0x0E. C - Structures, typedef

## Resources

**Read or watch:**

- [0x0d. Structures](https://docs.google.com/presentation/d/1wy6-h7ox6qUUabC50A6PD5uLiKHasmiOYDk3DwZPfGs/edit#slide=id.g13db114aac_0_149)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Documentation: structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
- [0x0d. typedef and structures](https://docs.google.com/presentation/d/1KNVX4ThB6RGEOFvwMMrHsJzC3EO3G3BaES68szWy9_E/edit#slide=id.g13db114aac_0_250)
- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
- [Programming in C](https://images.textbooks.com/TextbookInfo/Covers/0321776410.gif) (Chapter 8, Working with Structures p163-189)
- [The Lost Art of C](http://www.catb.org/esr/structure-packing/) Structure Packing (Advanced - not mandatory)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- What are structures, when, why and how to use them
- How to use `typedef`

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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `dog.h`
- Don’t forget to push your header file
- All your header files should be include guarded

---

## Quiz questions

<details>
<summary>Show</summary>
  
### Question #0

You should write documentation for all the structures you create

- [x] True
- [ ] I’ll do it 5 minutes before the deadline when I try Betty on my header file
- [x] As soon as I write my structure.

### Question #1

The general syntax for a struct declaration in C is:
```
struct tag_name {
   type member1;
   type member2;
   /* declare as many members as desired, but the entire structure size must be known to the compiler. */
};
```

- [x] True
- [ ] False
- [ ] Maybe

### Question #2

Those two codes do the same thing:
```
typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = {1, 2};
```
```
typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = { .y = 2, .x = 1 };
```

- [x] True
- [ ] False: the second does not compile
- [ ] False: the members of the structures will not have the same values

### Question #3

Given this code:
```
struct point {
   int x;
   int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;
```

To set the member y of my variable my_point to 98, I can do (select all valid answers):

- [x] my_point.y = 98;
- [ ] my_point->y = 98;
- [ ] p.y = 98;
- [x] (*p).y = 98;
- [ ] p->y = 98;

</details>

---

## Tasks

<details>
<summary>View Contents</summary>

### [0. Django mandatory](./dog.h)

Define a new type `struct dog` with the following elements:

- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Django";
    my_dog.age = 3.5;
    my_dog.owner = "Jay";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ make
gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Django, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```

**Repo:**

* GitHub repository: `holbertonschool-low_level_programming`
* Directory: `0x0E-structures_typedef`
* File: `dog.h`

### [1. A dog is the only thing on earth that loves you more than you love yourself](./1-init_dog.c)

Write a function that initialize a variable of type `struct dog`

- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Django", 3.5, "Jay");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Django, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```

**Repo:**

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x0E-structures_typedef`
- File: `1-init_dog.c`

### [2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad](./2-print_dog.c)

Write a function that prints a `struct dog`

- Prototype: `void print_dog(struct dog *d);`
- Format: see example bellow
- You are allowed to use the standard library
- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
- If `d` is `NULL` print nothing.
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Django";
    my_dog.age = 3.5;
    my_dog.owner = "Jay";
    print_dog(&my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Django
Age: 3.500000
Owner: Jay
julien@ubuntu:~/0x0d. structures, typedef$ 
```

**Repo:**

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x0E-structures_typedef`
- File: `2-print_dog.c`

### [3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read](./dog.h)

Define a new type `dog_t` as a new name for the type `struct dog`.
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Django";
    my_dog.age = 3.5;
    my_dog.owner = "Jay";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Django, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```

**Repo:**

* GitHub repository: `holbertonschool-low_level_programming`
* Directory: `0x0E-structures_typedef`
* File: `dog.h`

### [4. A door is what a dog is perpetually on the wrong side of](./4-new_dog.c)

Write a function that creates a new dog.

- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- You have to store a copy of `name` and `owner`
- Return `NULL` if the function fails
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Django", 3.5, "Jay");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Django, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```

**Repo:**

* GitHub repository: `holbertonschool-low_level_programming`
* Directory: `0x0E-structures_typedef`
* File: `4-new_dog.c`

### [5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg](./5-free_dog.c)

Write a function that frees dogs.

- Prototype: `void free_dog(dog_t *d);`
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Django", 3.5, "Jay");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Django, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$ 
```

**Repo:**

* GitHub repository: `holbertonschool-low_level_programming`
* Directory: `0x0E-structures_typedef`
* File: `5-free_dog.c`

</details>

---

## Author
### _Edgar Miguel Rodríguez G._

- **Github:** [Miguelro123](https://github.com/Miguelro123) 
- **Linkedin:** [Edgar Miguel Rodriguez Garcia](https://www.linkedin.com/in/edgar-miguel-rodriguez-garcia-20a5281a2/)
