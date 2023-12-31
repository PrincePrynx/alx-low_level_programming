#ifndef DOG_H
#define DOG_H

/**
*struct dog - Entry point
*@name: points to a char
*@age: points to a float
*@owner: is another pointer to a char
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/** dog_t - is a typedef for struct dog **/
typedef struct dog dog_t;

/** dog_t defines a new type for struct dog **/
dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);


#endif
