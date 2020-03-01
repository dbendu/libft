#include "ft_vector.h"
#include "private_vector.h"
#include "mode_libft.h"

#ifdef XMALLOC_MODE

void			*vec_copy(void *vecptr, t_bool save_capacity)
{
	t_vector	*vector;
	t_vector	*new_vector;
	size_t		new_size;

	vector = *(void**)vecptr - sizeof(t_vector);
	new_size = vector->size;
	if (save_capacity)
		new_size += vector->capacity;
	new_vector = vec_create(new_size, vector->typesize) - sizeof(t_vector);
	new_vector->size = vector->size;
	new_vector->capacity = new_size - vector->size;
	new_vector->data = (void*)new_vector + sizeof(t_vector);
	ft_memcpy(new_vector->data, vector->data, vector->size * vector->typesize);
	return (new_vector->data);
}

#else

void			*my_vec_copy(void *vecptr, t_bool save_capacity)
{
	t_vector	*vector;
	t_vector	*new_vector;
	size_t		new_size;

	vector = *(void**)vecptr - sizeof(t_vector);
	new_size = vector->size + vector->capacity;
	if (save_capacity)
		new_size += vector->capacity;
	new_vector = vec_create(new_size, vector->typesize);
	if (!new_vector)
		return (NULL);
	new_vector->size = vector->size;
	new_vector->capacity = new_size - vector->size;
	new_vector->data = (void*)new_vector + sizeof(t_vector);
	ft_memcpy(new_vector->data, vector->data, vector->size * vector->typesize);
	return (new_vector);
}

#endif
