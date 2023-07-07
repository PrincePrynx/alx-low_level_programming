#include "main.h"
#include <stdio.h>

/**
*main - prints all the arguments recieved
*@argc: argument count
*@argv: is argument vector
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{

int AR = 0;
	for (AR = 0; argc > AR; AR++)
{
	printf("%s\n", argv[AR]);
}
return (0);
}
