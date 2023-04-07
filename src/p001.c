/*Problem 001: If we list all the natural numbers below 10 that are multiples
of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum
of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

int sum_k(int n, int k);
int main(void)
{
    int n = 1000;
    int s_3 = sum_k(n, 3);
    int s_5 = sum_k(n, 5);
    int s_15 = sum_k(n, 15);
    int res = s_3 + s_5 - s_15;
    printf("Sum of multiples of 3 or 5 below %d is: %d\n", n, res);
}

/*Calculate the sum of integers up to n which are multiples of k.*/
int sum_k(int n, int k)
{
    int p = (n - 1) / k;
    printf("k: %d, p: %d\n", k, p);
    return (k * p * (p + 1)) / 2;
}