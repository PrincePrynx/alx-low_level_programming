#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starting point
 * Description: prints all base 16 numbers in lowercase
 * Return: set at 0 (success)
 */
int main(void)
{
char B16;
for (B16 = '0'; B16 <= '9'; B16++)
	putchar(B16);

for (B16 = 'a'; B16 <= 'f'; B16++)
	putchar(B16);

putchar('\n');
return (0);
}
