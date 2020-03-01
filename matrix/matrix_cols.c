#include "ft_matrix.h"

size_t			matrix_cols(void *matrix)
{
	return (vec_size(*(void**)matrix));
}
