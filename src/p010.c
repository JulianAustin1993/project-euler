/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/

#include <stdio.h>
#define N 2000000

void sieve(int a[], int limit);

int main(void)
{
    int a[N];
    sieve(a, N);
    long int sum = 0;
    for (int i = 0; i < N; i++)
        if (a[i])
            sum += i;
    printf("Sum of all the primes below %d is %ld\n", N, sum);
}

/*Sieve of Eratosthenes*/
void sieve(int a[], int limit)
{
    a[0] = 0;
    a[1] = 0;
    for (int i = 2; i < limit; i++)
        a[i] = 1;
    int i = 2;
    int j;
    for (int i = 2; (i * i) < limit; i++)
        if (a[i])
            for (int k = 0; (j = (i * i + k * i)) < limit; k++)
                a[j] = 0;
}