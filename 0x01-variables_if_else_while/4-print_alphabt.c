#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starting point
 * Description: prints lower case followed by a new line
 * Return: set at 0 (success)
 */
int main(void)
{
char lc;
for (lc = 'a' ; lc <= 'z' ; lc++)
if (lc != 'e' && lc != 'q')
	putchar(lc);


putchar('\n');
return (0);
}
