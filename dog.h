#ifndef DOG_H
#define DOG_H


	/**
	 * struct dog - 'About' of a dog
	 * @name: First member
	 * @age: Second member
	 * @owner: Third member
	 *
	 * Description: The initals of a dog like the name, owner of the dog and the name of the dog
	 */
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};


	/**
	 * dog_t - typedef for struct dog
	 * dog_t is like a more decriptive nickname for the structure 'dog'
	 */
	typedef struct dog dog_t;


	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);


	#endif
