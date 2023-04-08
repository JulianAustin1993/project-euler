/*Problem 4: A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is:
9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <math.h>

int reverse(int n);
int find_palindrome(void);

int main(void)
{
    int n = find_palindrome();
    printf("The palindrome is %d\n", n);
}

int find_palindrome(void)
{
    int n1, n2, n, n_max;
    for (n1 = 999; n1 > 100; n1--)
        for (n2 = n1; n2 > 100; n2--)
        {
            n = n1 * n2;
            if (n > n_max && n == reverse(n))
                n_max = n;
        }
    return n_max;
}

int reverse(int n)
{
    int reversed = 0;

    // Execute a while loop to reverse
    // digits of given number
    while (n != 0)
    {
        int r = n % 10;
        reversed = reversed * 10 + r;
        n /= 10;
    }
    return reversed;
}