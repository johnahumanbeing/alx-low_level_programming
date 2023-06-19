#ifndef DOG_DEF
#define DOG_DEF

/**
 *struct dog-defines do struct
 *@name:name of the dog
 *@age:age of the dog
 *@owner:the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *dog);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
