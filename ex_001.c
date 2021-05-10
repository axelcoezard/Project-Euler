#include <stdio.h>

/*
 * Problem 1:
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * Result: 233168
 */
int main() {
    int value = 0;
    int i = 0;
    while (i < 1000) {
        if (i % 3 == 0 || i % 5 == 0) 
            value += i;
        i++;
    }
    printf("%d\n", value);
}