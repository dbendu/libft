#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include <stdlib.h>
# include "ft_types.h"
# include "ft_utils.h"
# include "ft_memory.h"
# include "mode_libft.h"

void		*vec_create(size_t elems, size_t type_size);
void		vec_destroy(void *vecptr);

void		vec_pushback(void *vecptr, void *elem);
void		*vec_copy(void *vecptr, t_bool save_capacity);
void		vec_shrink_to_fit(void *vecptr);
void		vec_reserve(void *vecptr, size_t size);

size_t		vec_size(void *vecptr);
size_t		vec_capacity(void *vecptr);
size_t		vec_typesize(void *vecptr);

#endif
