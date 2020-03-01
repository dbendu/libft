#include "ft_matrix.h"

void			*matrix_create(size_t rows, size_t cols, size_t type_size)
{
	size_t		**matrix;
	size_t		iter;

	matrix = vec_create(rows, sizeof(void*));
	vec_reserve(&matrix, rows);
	iter = 0;
	while (iter < rows)
	{
		matrix[iter] = vec_create(cols, type_size);
		vec_reserve(&matrix[iter], cols);
		++iter;
	}
	return (matrix);
}