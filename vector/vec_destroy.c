#include "ft_vector.h"
#include "private_vector.h"

inline void		vec_destroy(void *vecptr)
{
	free(*(void**)vecptr - sizeof(t_vector));
}
