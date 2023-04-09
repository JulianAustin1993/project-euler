/*Problem 6: The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 + 7^2 + 8^2 + 9^2 + 10^2 = 385

The square of the sum of the first ten natural numbers is,

(1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10)^2 = 3025

Hence the difference between the sum of the squares of the first ten natural
numbers and the square of the sum is:
3025 - 385 = 2640
.

Find the difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum.
*/
#include <stdio.h>

int main(void)
{
    int n = 100;
    long int s_n = n * (n + 1) / 2;       /*Sum of n natural numbers. */
    long int p_n = s_n * (2 * n + 1) / 3; /*Pyramidal number formula. Pn = (1/6) * n * (n+1) * (2n+1)*/
    printf("Sum of the squares of first %d natural numbers:%ld\n", n, p_n);
    printf("Square of the sum of first %d natural numbers:%ld\n", n, s_n * s_n);
    printf("Difference is: %ld\n", s_n * s_n - p_n);
}