#ifndef DOG
#define DOG

/**
 * struct dog - defines name age and owner of a dog
 * @name: dog name
 * @age: age of dog
 * @owner: name of dog owner
 * Description: Header file that defines dog structure
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
