#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef strucy dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif


