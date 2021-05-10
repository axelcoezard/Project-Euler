#include <stdio.h>

/*
 * Problem 700:
 * Find the sum of all Eulercoins.
 * 
 * Result: 
 */
int main()
{
    unsigned long long int mod = 4503599627370517;
    unsigned long long int value = 1504170715041707;
    unsigned long long int minimum = value;
    unsigned long long int somme = value;
    unsigned long long int i = 2;
    while (value * i % mod != 0)
    {
        unsigned long long int new = value *i % mod;
        if (new < minimum)
        {
            minimum = new;
            somme += new;
            printf("New Eulercoin (index: %lld): %lld\n", i, new);
        }
        i++;
    }
    printf("%lld\n", somme);
}