#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to print in binary
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1;
    int bit_pos = 0;

    /* Find the position of the most significant bit */
    while ((n >> bit_pos) > 0)
        bit_pos++;

    /* Print the bits in reverse order */
    while (bit_pos--)
    {
        putchar(((n & (mask << bit_pos)) > 0) + '0');
    }
}
