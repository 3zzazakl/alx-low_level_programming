#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates random valid passwords for the program.
 * checksum - Getting the Checksum of the program.
 *
 *
 * Return: (0) Success
*/

int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
