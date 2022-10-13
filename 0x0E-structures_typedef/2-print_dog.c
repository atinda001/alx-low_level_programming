#include "dog.h"
#include <stdio.h>
/**
*print_dog - function to print dog details
*
*@d: pointer to struct dog
*Return: null
*/
void print_dog(struct dog *d)
{
	struct dog;
	char *name;
	float age;
	char *owner;


	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	if (d == NULL)
	{
		printf("(nil)\n");
	}
	if (name == NULL)
	{
		printf("NAME:(nil)\n");
	}
	printf("Name: %s\n", name);
	printf("Age: %f\n", age);
	printf("owner: %s\n", owner);
}
