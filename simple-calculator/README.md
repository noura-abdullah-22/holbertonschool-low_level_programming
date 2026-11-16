# C - Simple Calculator

A terminal-based interactive calculator written in C. It shows a menu in a loop, reads the user's choice and two numbers, and prints the result.

## Compile

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run

    ./calculator

Choose an option from the menu, then enter two numbers. Choose `0` to quit.

## Supported operations

| Option | Operation |
|--------|-----------|
| 1 | Addition (`+`) |
| 2 | Subtraction (`-`) |
| 3 | Multiplication (`*`) |
| 4 | Division (`/`) |
| 0 | Quit |

## Numeric behavior

Numbers are read and calculated as decimals (`double`), so the calculator supports values like `2.5` and division returns a decimal result (for example, `7 / 2 = 3.5`).

## Known limitations

- Invalid menu choices (non-numeric or out of range) print `Invalid choice` and show the menu again.
- Non-numeric numbers print `Invalid number` and ask again. The rest of the invalid line is discarded so the program never loops forever.
- Division by zero is detected and reported as an error instead of being calculated.
