#include <stdio.h>

/*
 * Problem 5:
 * What is the smallest positive number that is evenly 
 * divisible by all of the numbers from 1 to 20?
 * 
 * Result: 232792560
 */
int main() {
    long int value = 1;
    while (1) {
        int divisors = 0, i = 1;
        while (i <= 20) {
            if (value % i == 0) 
                divisors++;
            i++;
        }
        if (divisors >= 20) break;
        value++;
    }
    printf("%ld\n", value);
}