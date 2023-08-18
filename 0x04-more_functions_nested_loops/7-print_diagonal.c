#include "main.h"

/**
 * print_diagonal - Prints a diagonal line using '\'
 * @n: The number of times '\' should be printed on each line
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i ; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
}
