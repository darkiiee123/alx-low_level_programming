#ifndef _DOG_H_
#define _DOG_H_


/**
 * struct dog - creates a structure of the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: of dog
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
