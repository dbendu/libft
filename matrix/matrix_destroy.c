#include "ft_matrix.h"

void			matrix_destroy(void *matrixptr)
{
	size_t		iter;
	size_t		rows;
	size_t		**matrix;

	matrix = *(size_t***)matrixptr;
	rows = vec_size(&matrix);
	iter = 0;
	while (iter < rows)
	{
		vec_destroy(matrix + iter);
		++iter;
	}
	vec_destroy(&matrix);
}