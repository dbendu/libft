#include "ft_matrix.h"

void			matrix_add_col(void *matrixptr)
{
	size_t		**matrix;
	size_t		rows;
	size_t		iter;
	char		plug[vec_typesize(&(*(size_t***)matrixptr)[0])];

	matrix = *(size_t***)matrixptr;
	rows = vec_size(matrixptr);
	iter = 0;
	while (iter < rows)
	{
		vec_pushback(&matrix[iter], plug);
		++iter;
	}
}
