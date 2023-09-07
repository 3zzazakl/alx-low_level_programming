#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 *main - main
 *@argc: count arguments
 *@argv: array of arguments
 *Return: (1)
 */
int main(int argc, char *argv[])
{
int i, sum;

for (i = 0; i < argc; i++)
{
if (isalpha(*argv[i]) && !isdigit(*argv[i]))
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
