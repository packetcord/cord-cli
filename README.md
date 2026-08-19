# CORD-CLI

Command Line Interface development library based on radix tree.

## Build Instructions
To compile the example, run the following command in the root directory:
```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -g callbacks.c cli.c globals.c misc.c radix.c tests.c shell_main_example.c -o shell_main_example
```
