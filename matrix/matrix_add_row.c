#include "ft_matrix.h"

void			matrix_add_row(void *matrixptr)
{
	size_t		**matrix;
	void		*new_row;

	matrix = *(size_t***)matrixptr;
	new_row = vec_create(vec_size(&matrix[0]), vec_typesize(&matrix[0]));
	vec_reserve(&new_row, vec_size(&matrix[0]));
	vec_pushback(&matrix, &new_row);
	*(void**)matrixptr = matrix;
}
