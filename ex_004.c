#include <stdio.h>

/*
 * Problem 4:
 * Find the largest palindrome made from the product of two 3-digit numbers.
 *
 * Result: 906609
 */
int main() {
    long int maximum = 0;
    
    for(int i = 100; i <= 999; i++) {
        for(int j = 100; j <= 999; j++) {
            long int nbr = i * j, r_nbr = 0;
            // On continue seulement si le i * j est sup au maximum
            if (nbr <= maximum) continue;
            // On inverse le nbr dans r_nbr
            long int tmp = nbr;
            while (tmp != 0) {
                int remainder = tmp % 10;
                r_nbr = r_nbr * 10 + remainder;
                tmp /= 10;
            }
            // Si nbr == r_nbr, c'est un palindrome
            if (nbr == r_nbr) maximum = nbr;
        }
    }
    printf("%ld\n", maximum);
}