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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
