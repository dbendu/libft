#include "ft_vector.h"
#include "private_vector.h"

void			vec_reserve(void *vecptr, size_t elems)
{
	size_t		capacity;

	vecptr = *(void**)vecptr;
	capacity = ((t_vector*)(vecptr - sizeof(t_vector)))->capacity;
	((t_vector*)(vecptr - sizeof(t_vector)))->size = elems;
	((t_vector*)(vecptr - sizeof(t_vector)))->capacity = capacity - elems;
}
