# Monty Language Interpreter
## About
This is an introductory project that attempts to explain:
- What does LIFO and FIFO mean?
- What is a stack and when do we use it?
- What is a queue and when do we use it?
- What are the common implementations of stacks and queues?
- What are the common usecases of stacks and queues?
- What are the proper way to use global variables?

## Requirements
- Ubuntu 14.04 LTS
- GCC version 4.8.4 with flags: -Wall -Werror -Wextra and -pedantic

## Installation
1. Clone the repository
'https://github.com/itsmavo/monty.git'

2. Compile the program
'gcc -Wall -Werror -pedantic *.c -o monty'

3. Run the program as follows:
- Usage: `monty <file.m>`
- Ex: './monty ./bytecodes/37.m'

There are multiple `.m` files to choose from in the bytecodes directory
that run different Opcode functionality.