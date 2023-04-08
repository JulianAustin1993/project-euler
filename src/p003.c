/*Problem 3: The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    long int n = 600851475143;
    printf("Largest prime factor of %ld", n);
    long int i = 2;
    while ((i * i) < n)
    {
        while ((n % i) == 0)
            n /= i;
        i++;
    }

    printf(" is %ld\n", n);
}