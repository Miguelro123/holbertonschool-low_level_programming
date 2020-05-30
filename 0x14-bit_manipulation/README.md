# 0x14. C - Bit manipulation

## Resources

**Read or watch:**

- [Google](https://www.google.com/webhp?q=bit+manipulation+C)
- [Youtube](https://www.youtube.com/results?search_query=bitwise+operators+in+c)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- Look for the right source of information without too much help
- How to manipulate bits and use bitwise operators

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

What is `0x89` in base10?

- [ ] 89
- [ ] 135
- [x] 137
- [ ] 139

## Question #1

What is `0x89` in base2?

- [ ] 0b10101001
- [x] 0b10001001
- [ ] 0b01101001
- [ ] 0b10001000

### Question #2

What is `0b001010010` in base10?

- [ ] 81
- [x] 82
- [ ] 83
- [ ] 84

### Question #3

What is `0b01101101` in base16?

- [ ] 0x36
- [x] 0x6D
- [ ] 0x6E
- [ ] 0x7D
- [ ] 0xD6

### Question #4

What is `98` in base2?

- [ ] 0b01010010
- [x] 0b01100010
- [ ] b10011000

### Question #5

What is `98` in base16?

- [x] 0x62
- [ ] 0x98
- [ ] 0x96

### Question #6

`0x01 & 0x01 =` ?

- [ ] `0x00`
- [x] `0x01`
- [ ] `0x02`

### Question #7

`0x01 | 0x01 =` ?

- [ ] `0x00`
- [x] `0x01`
- [ ] `0x02`

### Question #8

`0x01 & 0x00 =` ?

- [x] `0x00`
- [ ] `0x01`
- [ ] `0x02`

### Question #9

`0x01 | 0x00 =` ?

- [ ] `0x00`
- [x] `0x01`
- [ ] `0x02`

### Question #10

`0x66 & 0x22 =` ?

- [x] `0x22`
- [ ] `0x44`
- [ ] `0x66`

### Question #11

`0x44 | 0x22 =` ?

- [ ] `0x22`
- [ ] `0x44`
- [x] `0x66`

### Question #12

`0x89 & 0x01 =` ?

- [ ] `0x00`
- [x] `0x01`
- [ ] `0x88`
- [ ] `0x89`

### Question #13

`0x88 & 0x01 =` ?

- [x] `0x00`
- [ ] `0x01`
- [ ] `0x88`
- [ ] `0x89`

### Question #14

`0x02 >> 1 =` ?

- [ ] 0x02
- [x] 0x01
- [ ] 0x00

### Question #15

`0x89 >> 3 =` ?

- [ ] 0x89
- [ ] 0x44
- [ ] 0x22
- [x] 0x11
- [ ] 0x08

### Question #16

`0x01 << 1 =` ?

- [ ] 0x00
- [ ] 0x01
- [x] 0x02
- [ ] 0x03
- [ ] 0x10

### Question #17

`0x13 << 1 =` ?

- [ ] 0x13
- [x] 0x26
- [ ] 0x4C
- [ ] 0x98

### Question #18

`~ 0x12 =` ?

- [x] 0xED
- [ ] 0xFD
- [ ] 0xEE
- [ ] 0x21

### Question #19

`~ 0x98 =` ?

- [ ] 0x66
- [x] 0x67
- [ ] 0x68

</details>

## Tasks

<details>
<summary>View Contents</summary>



</details>

## Author
### _Edgar Miguel Rodríguez G._

- **Github:** [Miguelro123](https://github.com/Miguelro123) 
- **Linkedin:** [Edgar Miguel Rodriguez Garcia](https://www.linkedin.com/in/edgar-miguel-rodriguez-garcia-20a5281a2/)
