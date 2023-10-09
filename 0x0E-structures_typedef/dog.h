#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - creates a dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: first structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
