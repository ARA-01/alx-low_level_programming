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

/**
 * dog_t - program that defines a new name for type struct dog.
 */

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void print_dog(struct dog *d);



#endif
