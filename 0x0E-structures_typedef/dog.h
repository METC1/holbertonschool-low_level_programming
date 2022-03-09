#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog new type
 * @name: parameter name of dog
 * @age: parameter float age of dog
 * @owner: parameter char name of owner
 * Description: create a type DOg
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} *d;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
