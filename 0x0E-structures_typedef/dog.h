#ifndef DOG_H
#define DOG_H


/**
 * struct dog - program that defines the elements of a dog.
 * @name: name of the dog
 * @age: age of the dog.
 * @owner: the ownner of the dog.
 *
 * Return: 0 on Success.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
