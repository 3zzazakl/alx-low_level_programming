#include <stdio.h>

/**
 * main - printing program name.
 * @argc: Argument Count
 * @argv: array of arguments.
 * Return: (Success) 0
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
