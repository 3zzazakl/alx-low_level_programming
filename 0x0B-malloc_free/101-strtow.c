#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: Input String.
 * Return: (Splitted words).
*/
char **strtow(char *str)
{
	char *token;

       if (str == NULL ||  *str == '\0')
       {
              return (NULL);
       }

       token = strtok(str, " ");

       while (token != NULL)
       {
              printf("%s\n", token);
              token = strtok(NULL, " ");
       }
       return (0);
}
