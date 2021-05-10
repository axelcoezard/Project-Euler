#include <stdio.h>

/*
 * Problem 6:
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 *
 * Result: 25164150
 */
int main() {
    long int sum_squares = 0;
    long int square_sum = 0;

    int i = 1;
    while (i <= 100) {
        square_sum += i;
        sum_squares += i * i;
        i++;
    }
    square_sum *= square_sum;

    printf("%ld\n", square_sum - sum_squares);
}