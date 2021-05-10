#include <stdio.h>

/*
 * Problem 3:
 * What is the largest prime factor of the number 600851475143 ?
 * 
 * Result: 6857
 */
int main() {
    long int source = 600851475143;
    int divisor = 2;
    while (source > 1) {
        while (source % divisor == 0)
            source /= divisor;
        divisor += 1;
    }
    printf("%d\n", divisor - 1);
}