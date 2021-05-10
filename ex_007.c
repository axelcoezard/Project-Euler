#include <stdio.h>

/*
 * Problem 7:
 * What is the 10 001st prime number?
 *
 * Result: 104743
 */
int main() {
    long int value = 2, count = 0;
    while (count < 10001) {
        int j = 2, divisors = 2;
        while (j < value) {
            if (value % j == 0)
                divisors++;
            j++;
        }
        if (divisors == 2) {
            count++;
        }
        value++;
    }
    printf("%ld\n", value - 1);
}