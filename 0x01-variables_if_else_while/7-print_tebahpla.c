#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starting point
 * Description: prints lowercase in reverse
 * Return: set at 0 (success)
 */
int main(void)
{
char lw;
for (lw = 'z'; lw >= 'a'; lw--)
putchar(lw);

putchar('\n');
return (0);
}
