
# 0x02. C - Functions, Nested Loops

## Description

This project introduces **functions and nested loops in C programming**.
It focuses on writing reusable functions, understanding function prototypes, and using nested loops to solve problems.

The tasks in this project help build a strong foundation in **modular programming**, which is an essential skill for becoming a **low-level and full-stack developer**.

---

## Learning Objectives

At the end of this project, you should be able to explain:

* What **nested loops** are and how to use them
* What a **function** is and how to use functions
* The difference between a **function declaration and definition**
* What a **function prototype** is
* The **scope of variables**
* What the GCC flags mean:

  * `-Wall`
  * `-Werror`
  * `-Wextra`
  * `-pedantic`
  * `-std=gnu89`
* What **header files** are
* How to use **#include** with header files

---

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* Compilation environment: **Ubuntu 20.04 LTS**
* Compilation command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

Rules:

* All files must end with a **new line**
* A **README.md** file is mandatory
* **No global variables allowed**
* Maximum **5 functions per file**
* You are **not allowed to use the standard library**
* Functions like `printf`, `puts`, etc. are **forbidden**
* Only `_putchar` is allowed for output
* `_putchar.c` should **not be pushed**
* All function prototypes must be declared in **main.h**

---

## Project Structure

```
0x02-functions_nested_loops/
│
├── main.h
├── 0-putchar.c
├── 1-alphabet.c
├── 2-print_alphabet_x10.c
├── 3-islower.c
├── 4-isalpha.c
├── 5-sign.c
├── 6-abs.c
├── 7-print_last_digit.c
├── 8-24_hours.c
├── 9-times_table.c
├── 10-add.c
├── 11-print_to_98.c
├── 100-times_table.c
├── 101-natural.c
├── 102-fibonacci.c
├── 103-fibonacci.c
├── 104-fibonacci.c
└── README.md
```

---

## Tasks

### 0. _putchar

Prints `_putchar` followed by a new line.

### 1. print_alphabet

Prints the alphabet in lowercase.

### 2. print_alphabet_x10

Prints the alphabet **10 times**.

### 3. _islower

Checks if a character is **lowercase**.

### 4. _isalpha

Checks if a character is an **alphabet letter**.

### 5. print_sign

Prints the **sign of a number**:

* `+` if positive
* `0` if zero
* `-` if negative

### 6. _abs

Computes the **absolute value** of an integer.

### 7. print_last_digit

Prints the **last digit** of a number.

### 8. jack_bauer

Prints **every minute of the day** from:

```
00:00 to 23:59
```

### 9. times_table

Prints the **9 times table starting from 0**.

### 10. add

Adds **two integers** and returns the result.

### 11. print_to_98

Prints all numbers from **n to 98**.

### 12. print_times_table

Prints the **n times table**, starting with 0.

### 13. Multiples of 3 and 5

Computes the **sum of all multiples of 3 or 5 below 1024**.

### 14. Fibonacci numbers

Prints the **first 50 Fibonacci numbers**.

### 15. Even Fibonacci numbers

Finds the **sum of even Fibonacci numbers below 4,000,000**.

### 16. First 98 Fibonacci numbers

Prints the **first 98 Fibonacci numbers**.

---

## Compilation Example

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
_putchar.c main.c file.c -o output
```

Example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
_putchar.c 9-main.c 9-times_table.c -o 9-times_table
```

---

## Author

Muraina Olamide Sherif

Aspiring Software Engineer and Full-Stack Developer.





