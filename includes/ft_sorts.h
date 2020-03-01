#ifndef FT_SORTS_H
# define FT_SORTS_H

#include "ft_types.h"
#include "ft_utils.h"

void			ft_bubble_sort(void *arr, size_t elems, size_t elem_size,
								int (*cmp) (const void *, const void *));

#endif
