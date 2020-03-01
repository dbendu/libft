#include "ft_vector.h"
#include "private_vector.h"

inline size_t		vec_typesize(void *vecptr)
{
	return ((t_vector*)(*(void**)vecptr - sizeof(t_vector)))->typesize;
}