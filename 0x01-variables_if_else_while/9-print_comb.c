#include <stdio.h>

/**
 * main - printing numbere from 0 to 9 with ,
 *
 * Return: (Success) 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		if (num == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
