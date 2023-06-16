#include <stdio.h>
/**
*main - Prints all possible combinations of two two-digit numbers.
*
*Return: Returns 0
*/
int main(void)
{
int main(void)
{
int dgt1, dgt2;
for (dgt1 = 0; dgt1 <= 98; dgt1++)
{
for (dgt2 = dgt1 + 1; dgt2 <= 99; dgt2++)
{
putchar((dgt1 / 10) + '0');
putchar((dgt1 % 10) + '0');
putchar(32);
putchar((dgt2 / 10) + '0');
putchar((dgt2 % 10) + '0');
if (dgt1 / 10 != 9 || dgt1 % 10 != 8)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
