#include <stdio.h>
#include <ctype.h>
/**
 * main - Print the lowercase alphabet in reverse
 *
 * Return: Return 0 (Success)
 */
int main(void)
{
	int alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
