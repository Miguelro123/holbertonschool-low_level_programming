# 0x01. C - Variables, if, else, while

## Resources
**Read or watch:**

- [Everything you need to know to start with C](https://docs.google.com/presentation/d/1ghto-TsXqgPRuEVmiCp7GvGttobdTLF4Yq8IRXwzvHY/edit#slide=id.p) (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.)
- [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
- [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
- [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
- [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
- [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
- [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
- [Logical operators](https://fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
- [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
- [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)

**man or help:**

- `ascii` (You do not need to learn about `scanf`, `getc`, `getchar`, `EOF`, `EXIT_SUCCESS`, `time`, `rand`, `srand`, `RAND_MAX`, `for` loops, `do...while` loops, functions.)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- What are the arithmetic operators and how to use them
- What are the logical operators (sometimes called boolean operators) and how to use them
- What the the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- What are the boolean operators and how to use them
- How to use the `if`, `if ... else` statements
- How to use comments
- How to declare variables of types `char`, `int`, `unsigned int`
- How to assign values to variables
- How to print the values of variables of type `char`, `int`, `unsigned int` with `printf`
- How to use the `while` loop
- How to use variables with the `while` loop
- How to print variables using `printf`
- What is the `ASCII` character set
- What are the purpose of the `gcc` flags `-m32` and `-m64`

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` `and -pedantic`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

## Quiz questions

### Question #0

What is the size of the `unsigned int` data type?

- [ ] 1 byte
- [ ] 2 bytes
- [x] 4 bytes
- [ ] 8 bytes

### Question #1

What is the size of the `char` data type?

- [x] 1 byte
- [ ] 2 bytes
- [ ] 4 bytes
- [ ] 8 bytes

### Question #2

What is the size of the `float` data type?

- [ ] 1 byte
- [ ] 2 bytes
- [x] 4 bytes
- [ ] 8 bytes

### Question #3

Which of the following are both valid `if` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers

- [ ] <pre>
if a > b
{
  return (a);
}
</pre>

- [x] <pre>
if (a > b)
{
  return (a);
}
</pre>

- [ ] <pre>
if {a > b}
(
  return {a};
)
</pre>

- [ ] <pre>
if ((((((a > b))))))
{
  return (a);
}
</pre>

- [x] <pre>
if (a > b)
  return (a);
</pre>

### Question #4

Which of the following are both valid `for` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers

- [x] <pre>
for (a = 0; a < b; a++)
{
    printf("%d\n", a);
}
</pre>

- [x] <pre>
for (a = 0; a < b; a++)
    printf("%d\n", a);
</pre>

- [ ] <pre>
for (int a = 0; a < b; a++)
{
    printf("%d\n", a);
}
</pre>

- [ ] <pre>
a = 0;
for (a < b;;)
{
    printf("%d\n", a++);
}
</pre>

- [x] <pre>
a = 0;
for (; a < b;)
{
    printf("%d\n", a++);
}
</pre>

### Question #5

Which of the following are both valid `while` or `do/while` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers

- [ ] <pre>
while (a = 0; a < b; a++)
{
    printf("%d\n", a);
}
</pre>

- [x] <pre>
a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}
<(pre>

- [x] <pre>
a = 0;
do {
    printf("%d\n", a);
    a++;
} while (a < b);
</pre>

- [x] <pre>
a = 0;
while (a < b)
    printf("%d\n", a++);
</pre>

- [ ] <pre>
a = 0;
while (a < b)
(
    printf("%d\n", a);
    a++;
)
</pre>

- [ ] <pre>
a = 0;
do while (a < b)
{
    printf("%d\n", a);
    a++;
}
</pre>
