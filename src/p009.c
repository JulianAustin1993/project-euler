/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

Useful qualities about a < b < c for their sum.
a < 1000 / 3 = 333
b < 1000 / 2 = 500
*/
#include <stdio.h>

int main(void)
{
    int found = 0;
    int sum = 1000;
    int a, b, c;
    for (a = 1; a < sum / 3 && !found; a++)
        for (b = a; b < sum / 2 && !found; b++)
        {
            c = sum - a - b;
            if ((a * a + b * b) == (c * c))
                found = 1;
        }
    a--;
    b--;
    printf("(%d, %d, %d)\n", a, b, c);
    printf("Their product is: %d\n", a * b * c);
}