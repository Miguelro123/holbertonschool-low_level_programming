# 0x1B. C - Sorting algorithms & Big O

## Background Context

This project is meant to be done by groups of two students. Each group of two should [pair program](https://en.wikipedia.org/wiki/Pair_programming) for at least the mandatory part.

## Resources

**Read or watch:**

- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
- [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg) (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `sort.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.

## More Info
### Data Structure and Functions

For this project you are given the following `print_array`, and `print_list` functions:
```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

- Our files `print_array.c` and `print_list.c` (containing the `print_array` and `print_list` functions) will be compiled with your functions during the correction.
- Please declare the prototype of the functions `print_array` and `print_list` in your `sort.h` header file
- Please use the following data structure for doubly linked list:
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

Please, note this format is used for Quiz and Task questions.

- `O(1)`
- `O(n)`
- `O(n!)`
- n square -> `O(n^2)`
- log(n) -> `O(log(n))`
- n * log(n) -> `O(nlog(n))`
- n + k -> `O(n+k)`
- …

Please use the “short” notation (don’t use constants). Example: `O(nk)` or `O(wn)` should be written `O(n)`. If an answer is required within a file, all your answers files must have a newline at the end.

### Tests

Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://www.random.org/integer-sets/)

## Quiz questions

<details>
<summary>Show</summary>
  
### Question #0

What is the time complexity of this function / algorithm?
```
void f(int n)
{
    printf("n = %d\n", n);
}
```

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #1

What is the time complexity of this function / algorithm?
```
void f(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("[%d]\n", i);
    }
}
```

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #2

What is the time complexity of this function / algorithm?
```
void f(int n)
{
    int i;

    for (i = 0; i < n; i += 98)
    {
        printf("[%d]\n", i);
    }
}
```

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #3

What is the time complexity of this function / algorithm?
```
void f(unsigned int n)
{
    int i;

    for (i = 1; i < n; i = i * 2)
    {
        printf("[%d]\n", i);
    }
}
```

- [ ] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [x] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #4

What is the time complexity of this function / algorithm?
```
var factorial = function(n) {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n - 1);
    }
}
```

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #5

What is the time complexity of this function / algorithm?
```
foreach($numbers as $number)
{
    echo $number;
}
```

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #6

What is the time complexity of this function / algorithm?
```
void f(unsigned int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j = j * 2)
        {
            printf("[%d] [%d]\n", i, j);
        }
    }
}
```

- [ ] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [x] O(nlog(n))
- [ ] O(2^n)

### Question #7

What is the time complexity of this function / algorithm?
```
void f(int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 1; j < n; j = j * 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
        else
        {
            for (j = 0; j < n; j = j + 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
    }
}
```

- [ ] O(1)
- [ ] O(n)
- [ ] O(n!)
- [x] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #8

What is the time complexity of this function / algorithm?
```
int Fibonacci(int number)
{
    if (number <= 1) return number;

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}
```

- [ ] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [x] O(2^n)

### Question #9

What is the time complexity of this function / algorithm?
```
def func(n):
    a=5
    b=6
    c=10
    for i in range(n):
        for j in range(n):
            x = i * i
            y = j * j
            z = i * j
    for k in range(n):
        w = a*k + 45
        v = b*b
    d = 33
```

- [ ] O(1)
- [ ] O(n)
- [ ] O(n!)
- [x] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #10

What is the time complexity of this function / algorithm?
```
void f(int n)
{
     int i;
     int j;

     for (i = 0; i < n; i++)
     {
          for (j = i + 1; j < n; j++)
          {
               printf("[%d] [%d]\n", i, j);
          }
     }
}
```

- [ ] O(1)
- [ ] O(n)
- [ ] O(n!)
- [x] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #11

What is the time complexity of accessing the nth element on an unsorted array?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #12

What is the time complexity of inserting at index n on an unsorted array?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #13

What is the time complexity of removing at index n in an unsorted array?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #14

What is the time complexity of searching for an element in an unsorted array of size n?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #15

What is the time complexity of setting a value at index n in an unsorted array?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #16

What is the time complexity of accessing the nth element of a singly linked list?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #17

What is the time complexity of inserting after the nth element of a singly linked list? (Assuming you have a pointer to the node to insert)

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #18

What is the time complexity of removing the nth element of a singly linked list? (Assuming you have a pointer to the node to remove)

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #19

What is the time complexity of searching for an element in a singly linked list of size n?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #20

What is the time complexity of setting the value of the nth element in a singly linked list? (Assuming you have a pointer to the node to set the value of)

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #21

What is the time complexity of accessing the nth element of a doubly linked list?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #22

Assuming you have a pointer to the node to insert, what is the time complexity of inserting after the nth element of a doubly linked list?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #23

Assuming you have a pointer to the node to remove, what is the time complexity of removing the nth element of a doubly linked list?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #24

What is the time complexity of searching for an element in a doubly linked list of size n?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #25

Assuming you have a pointer to the node to set the value of, what is the time complexity of setting the value of the nth element in a doubly linked list?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #26

What is the time complexity accessing the nth element in an unsorted Python 3 list?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #27

What is the time complexity of inserting into an unsorted Python 3 list at index n?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #28

What is the time complexity of removing at index n from an unsorted Python 3 list?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #29

What is the time complexity of searching for an element in an unsorted Python 3 list of size n?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #30

What is the time complexity of setting value at index n in an unsorted Python 3 list?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #31

What is the time complexity of the “push” operation onto a stack?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #32

What is the time complexity of the “pop” operation onto a stack?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #33

What is the time complexity of searching for an element in a stack of size n?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #34

What is the time complexity of “pushing” an element into a queue if you are given a pointer to both the head and the tail of the queue?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #35

What is the time complexity of “popping” an element in a queue if you are given a pointer to both the head and the tail of the queue?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #36

Whatis the time complexity of searching for an element in a queue of size n if you are given a pointer to both the head and the tail of the queue?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #37

What is the best case time complexity searching for an element in a hash table with the implementation you used during the previous Hash Table C project (chaining)?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #38

What is the time complexity of searching for an element - worst case - in a hash table with the implementation you used during the previous Hash Table C project (chaining)?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #39

What is the best case time complexity of insertion in a hash table with the implementation you used during the previous Hash Table C project (chaining)?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #40

What is the worst case time complexity of insertion in a hash table with the implementation you used during the previous Hash Table C project (chaining)?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #41

What is the time complexity of best case deletion from a hash table with the implementation you used during the previous Hash Table C project (chaining)?

- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

### Question #42

What is the time complexity of worst case deletion from a hash table with the implementation you used during the previous Hash Table C project (chaining)?

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

</details>

## Tasks

<details>
<summary>View Contents</summary>



</details>

## Author
### _Edgar Miguel Rodríguez G._

- **Github:** [Miguelro123](https://github.com/Miguelro123) 
- **Linkedin:** [Edgar Miguel Rodriguez Garcia](https://www.linkedin.com/in/edgar-miguel-rodriguez-garcia-20a5281a2/)
