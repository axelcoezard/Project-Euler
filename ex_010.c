#include <stdio.h>

/*
 * Problem 10:
 * Find the sum of all the primes below two million.
 * 
 * Result: 
 */
int main() {
    int limit = 2000000;
    int value = 2;
    long int sum = 0;
    while (value < limit) {
        int divisors = 2, i = 2;
        while (i < value) {
            if (value % i == 0) 
                divisors++;
            i++;
        }
        if (divisors == 2) {
            sum += value;
        }
        value++;
    }
    printf("%ld\n", sum);
}