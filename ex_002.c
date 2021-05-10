#include <stdio.h>

/*
 * Problem 2:
 * By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
 * find the sum of the even-valued terms.
 *
 * Result: 4613732
 */
int main() {
    int limit = 4000000;
    int u0 = 1, u1 = 2;
    int value = 0;
    while (u0 <= limit && u1 <= limit) {
        int tmp = u0;
        u0 = u1;
        u1 = tmp + u1;
        if (u0 % 2 == 0) value += u0;
    }
    printf("%d\n", value);
}