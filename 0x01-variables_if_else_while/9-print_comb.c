#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Return 0 (Success)
 */
int main(void)
{
	int dgt;

	for (dgt = '0'; dgt <= '9'; dgt++)
	{
		putchar(dgt);
		if (dgt == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
