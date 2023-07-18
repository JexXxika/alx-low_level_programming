#include <stdlib.h>
	#include "dog.h"


	/**
	 * free_dog - frees memory given to the structure 'dog'
	 * @d - points to the structure of the dog we want to free
	 */
	void free_dog(dog_t *d)
	{
		if (d)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
	}
