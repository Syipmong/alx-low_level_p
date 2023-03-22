#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
   char letter = 'a'; // start with the first lowercase letter
    int i = 0;

    while (i < 10)
    {
        int j = 0;
        while (j < 26)
        {
            _putchar(letter);
            letter++;
            j++;
        }
        _putchar('\n');
        i++;
        letter = 'a'; // reset the letter to 'a' for the next line
    }
}
