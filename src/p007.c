/*Problem 7: By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
we can see that the 6th prime is 13.

What is the 10001st prime number?
*/
#include <stdio.h>
#include <math.h>

void sieve(int a[], int N);

int main(void)
{
    int N = 10001;
    double ln_N = log(N);
    int ub = N * (ln_N + log(ln_N)); /*Prime Number Theorem*/
    printf("The %dst prime lies below %d\n", N, ub);
    int a[ub + 1];
    sieve(a, ub + 1);
    int i;
    int n = N;
    for (i = 2; n > 0; i++)
    {
        if (a[i])
            n--;
    }
    printf("%dst Prime is %d\n", N, i - 1);
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