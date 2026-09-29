# find_last_e

Display the last lowercase 'e' found in a string

**Difficulty:** 2/5
**Allowed functions:** write

Solved in practice.

# Personal comment:
To verify that the program is actually finding the last `e`, you can temporarily print its position:

#include <stdio.h>

if (pos == -1)
    printf("No 'e' was found\n");
else
printf("Found the last 'e' at index %d: %c\n", pos, argv[1][pos]);

For example, with:

h e l l o t h e r e
0 1 2 3 4 5 6 7 8 9
the program will display the position of the last `e` and the number 9. 

This is only for testing purposes. In the final version of the exercise, the program should print only the `e` followed by a newline.

[Read the full exercise on Grademe](https://grademe.io/app/exercise/find-last-e)
