/*Problem 5: 2520 is the smallest number that can be divided by each of the
numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the
numbers from 1 to 20?
*/

#include <stdio.h>

int main(void)
{
    // 1: 1
    // 2: 2
    // 3: 3
    // 4: 2^2
    // 5: 5
    // 6: 2 * 3
    // 7: 7
    // 8: 2^3
    // 9: 3^2
    // 10: 2 * 5
    // 11: 11
    // 12: 2^2 * 3
    // 13: 13
    // 14: 2 * 7
    // 15: 3 * 5
    // 16: 2^4
    // 17: 17
    // 18: 2 * 3^2
    // 19: 19
    // 20: 2^2 * 5
    printf("LCM of 1, 2, ..., 20 is %d\n", 2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17 * 19);
}