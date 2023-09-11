#ifndef DOG_H
#define DOG_H

/* Headers_Declaration */


/* Struct-Declaration */
/**
 * struct dog - declare a new struct.
 * @name: Name.
 * @age: Age.
 * @owner: Owner Name.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Fucntion_Declaration */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
