#include "main.h"
/**
*print_alphabet_x10 - Print 10 times the alphabet, in lowercase,
* followed by a new line.
*desc: Using loop
*Return: no return
*/
void print_alphabet_x10(void)
{
int counter = 0;
int letter;
while (counter++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar(10);
}
}
