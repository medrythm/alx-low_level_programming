#include <stdio.h>
#include <ctype.h>
/**
 * main - Print the alphabets in lowercase
 *
 * Return: Return 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
ch = tolower(ch);
putchar(ch);
}
putchar('\n');
return (0);
}
