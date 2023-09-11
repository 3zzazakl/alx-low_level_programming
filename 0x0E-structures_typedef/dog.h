#ifndef DOG_H
#define DOG_H

/* Headers_Declaration */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Struct-Declaration */
/**
 * struct dog - declare a new struct.
 * @name: Name.
 * @age: Age.
 * @owner: Owner Name.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Fucntion_Declaration */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif /* DOG_H */
