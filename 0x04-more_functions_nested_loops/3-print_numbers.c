#include "main.h"

/**
 *print_numbers - prints 0 - 9.
 *
 *Return: Always 0 (Success)
 */

void print_numbers(void)
{
int i;

i = 0;

for (i = 0; i < 10; i++)

_putchar('0' + i);

_putchar('\n');
}
