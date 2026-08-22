# push_swap

This repository is a solution to the [push_swap](https://github.com/qaneee/push_swap) project for 42 School, implementing a sorting algorithm for stacks using a limited set of operations. The core algorithm used is **Butterfly Sort**, efficiently adapted to the constraints and requirements of the 42 curriculum.

## About

The _push_swap_ project challenges students to sort a stack of integers using predefined stack operations: `push`, `swap`, `rotate`, and `reverse rotate`. The goal is to produce the shortest possible sequence of operations to achieve a sorted stack. This implementation uses Radix Sort to meet the efficiency requirements.

## Features

- **Efficient Butterfly Sort Algorithm:** Adapted for the stack-based sorting constraints of 42.
- **Minimal Operation Count:** Tries to sort numbers using as few moves as possible.
- **Error Checking:** Handles invalid inputs and duplicate integers.
- **Easy to Use:** Simple command-line usage.

## How it Works

Given a stack of integers (Stack A), the program sorts these using another empty stack (Stack B) and the permitted operations, outputting the sequence of commands needed for sorting. The implementation uses binary Radix Sort, ideal for large input sizes due to its linear time complexity.

## Usage

You can run the program from the command line:

```bash
./push_swap 3 2 1 6 5 8
```

The output will be a sequence of stack operations, for example:

```
pb
pb
sa
pa
pa
```
*Each operation is explained in the [Project Requirements](#project-requirements) section.*

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/qaneee/push_swap.git
   ```
2. Build the project:
   ```bash
   cd push_swap
   make
   ```
3. Run the program with a list of integers as arguments.

## Algorithm: Radix Sort

**Radix Sort** works by sorting numbers according to their bits, grouping them based on whether the corresponding bit is `0` or `1`. In _push_swap_, this is done by pushing elements between Stack A and Stack B using the allowed operations, iterating for every bit in the maximum number.  
This approach is used since the number of required operations grows reasonably with input size, making it suitable for the requirements of the project.

## Project Requirements

**Permitted operations:**
- `sa` : swap the first 2 elements at the top of stack A.
- `sb` : swap the first 2 elements at the top of stack B.
- `ss` : `sa` and `sb` at the same time.
- `pa` : push the first element on top of stack B onto stack A.
- `pb` : push the first element on top of stack A onto stack B.
- `ra` : rotate stack A upwards.
- `rb` : rotate stack B upwards.
- `rr` : `ra` and `rb` at the same time.
- `rra`: rotate stack A downwards.
- `rrb`: rotate stack B downwards.
- `rrr`: `rra` and `rrb` at the same time.
