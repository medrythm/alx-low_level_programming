#include <stdio.h>
#include <ctype.h>
/**
 * main - Print all single digit numbers of base 10
 *
 * Return: Return 0 (Success)
 */
int main(void)
{
	int dgt;

	for (dgt = '0'; dgt <= '9'; dgt++)
	{
		putchar(dgt);
	}
	putchar('\n');
	return (0);
}
