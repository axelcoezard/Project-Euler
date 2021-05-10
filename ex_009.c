#include <stdio.h>

/*
 * Problem 9:
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 * 
 * Result: 31875000
 */
int main() {
    int r = 1, product = 1;
    int c = 1;
    while (r && c < 1000) {
        int b = 1;
        while (r && b < c && b < 1000) {
            int a = 1;
            while (r && a < b && a < c && a < 1000) {
                if (a*a + b*b == c*c && a+b+c == 1000) {
                    product = a * b * c;
                    r = 0;
                } a++;
            } b++;
        } c++;
    }
    printf("%d\n", product);
}