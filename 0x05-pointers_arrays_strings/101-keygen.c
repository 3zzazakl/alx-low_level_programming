#include "main.h"
/**
 * main - generates random valid passwords for the program.
 * checksum - Getting the Checksum of the program.
 *
 *
 * Return: (0) Success
*/

int main(void)
{
	char *arg1 = "AAA";
	int a = checksum(arg1);

	printf("sum %d\n", a);
	return (0);
}

int64_t checksum(char *arg1)
{
	char var_18h;
	int64_t var_8h;

	var_8h = 0;
	for (var_18h = *arg1; *arg1 != '\0'; arg1++)
	{
	/*adding a printf statement to know what is getting added to var_8h*/
	printf("%c\n", var_18h);
	var_8h = var_8h + var_18h;
	var_18h = *arg1;

	}
	return (var_8h);
}
