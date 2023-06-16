#include <stdio.h>
#include <ctype.h>
/**
 * main - Print the alphabets in lowercase except q and e
 *
 * Return: Return 0 (Success)
 */
int main(void)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
if (alph == 'q' || alph == 'e')
{
continue;
}
putchar(alph);
}
putchar('\n');
return (0);
}
