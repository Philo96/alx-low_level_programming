#include "main.h"

/**
 * print_alphabet_x10 - Print the alphapets ten times.
 * Return: 0.
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int num = 0;

for (; num < 10; num = num + 1)
{
for (; letter <= 'z'; letter++)
{
_putchar(letter);
}
letter = 'a';
_putchar('\n');
}
}
