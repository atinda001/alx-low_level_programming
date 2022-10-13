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
typedef struct dog dog_t;
typedef struct dog_t 
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#include <stdlib.h>
void print_dog(struct dog *d);
#endif  /* _dog_h */
