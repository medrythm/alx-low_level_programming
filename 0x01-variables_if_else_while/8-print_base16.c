#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
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
		{
			dgt = 'a';
			for (; dgt <= 'f'; dgt++)
			{
				putchar(dgt);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
