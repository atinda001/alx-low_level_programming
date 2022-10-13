#ifndef _dog_h
#define _dog_h
/**
*struct dog - structure
*@name: first member
*@age: second member
*@owner: third member
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#include <stdlib.h>

#endif  /* _dog_h */
