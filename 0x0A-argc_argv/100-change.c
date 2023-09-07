#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *main - main
 *@argc: count
 *@argv: array of args
 *Return: always 1
 */
int main(int argc, char *argv[])
{
	int i, sum;

	for (i = 0; i < argc; i++)
	{

		if (isalpha(*argv[i]))
		{
			printf("Error");
			printf("\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
		printf("%d", sum);
		printf("\n");
	return (0);
}
