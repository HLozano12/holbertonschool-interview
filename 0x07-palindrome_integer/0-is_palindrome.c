#include "palindrome.h"

/**
 * is_palindrome - Prototype Given
 *
 * @n: Our Int to test
 *
 * Return: 1 if palindrome, 0 if not palindrome
 */
int is_palindrome(unsigned long n)
{
    unsigned long reverse = 0, numb = n;

    while (numb > 0)
    {
        reverse = reverse * 10 + numb % 10;
        numb = numb / 10;
    }
    if (reverse == n)
        return (1);
    else
        return (0);
}
