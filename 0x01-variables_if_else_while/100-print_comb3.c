#include <stdio.h>
#include <ctype.h>
/**
 * main - Print all possible different combinations of two digits.
 *
 * Return: Return 0 (Success)
 */
int main(void)
{
int dgt1, dgt2;
for (dgt1 = 0; dgt1 < 9; dgt1++)
{
for (dgt2 = dgt1 + 1; dgt2 < 10; dgt2++)
{
putchar((dgt1 % 10) + '0');
putchar((dgt2 % 10) + '0');
if (dgt1 == 8 && dgt2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
