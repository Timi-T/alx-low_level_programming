#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - structure for dogs
 * @name: dog name
 * @age: dogs age
 * @owner: owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif
