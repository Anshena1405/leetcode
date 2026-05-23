/*
Problem: Palindrome Number

Approach:
Reverse half of the number and compare.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <stdbool.h>

bool isPalindrome(int x)
{
    if (x < 0 || (x != 0 && x % 10 == 0))
    {
        return false;
    }

    int check = 0;

    while (x > check)
    {
        check = check * 10 + (x % 10);
        x = x / 10;
    }

    return (x == check || x == check / 10);
}
