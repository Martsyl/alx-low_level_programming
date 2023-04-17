#ifndef DOG_H
#define DOG_H
/**
 * struct dog  - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_r - typedef for struct dog
 */
typedef struct dog dog_r;
void dog_iniit(struct dog *d, char *name, float *age, char *owner);
dog_r *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
