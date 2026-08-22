# ft_printf

Custom `printf` Function Implementation - 42 Project

## Overview

`ft_printf` is a custom implementation of the C standard library `printf` function. Developed as part of the [42 School](https://www.42network.org/) core curriculum, this project demonstrates mastery of low-level programming, formatted output, and variadic arguments handling.

## Features

- Handles variable-length arguments
- Robust error management and edge case handling
- Memory-safe, with thorough input validation
- Clear separation of code modules for each specifier

## Getting Started

### Installation

Clone this repository:

```sh
git clone https://github.com/qaneee/ft_printf.git
cd ft_printf
```

Build the library:

```sh
make
```

### Usage

Include `ft_printf.h` in your project and link against `libftprintf.a`:

```c
#include "ft_printf.h"

int main(void)
{
    int n = 42;
    ft_printf("The answer is: %d\n", n);
    return 0;
}
```

**Compile Example:**

```sh
gcc main.c libftprintf.a -I.
```

## Format Specifiers Supported

| Specifier | Description            |
| --------- | ----------------------|
| `%c`      | Character              |
| `%s`      | String                 |
| `%p`      | Pointer address        |
| `%d`, `%i`| Signed decimal integer |
| `%u`      | Unsigned decimal integer |
| `%x`      | Unsigned hexadecimal (lowercase) |
| `%X`      | Unsigned hexadecimal (UPPERCASE) |
| `%%`      | Literal '%'            |

