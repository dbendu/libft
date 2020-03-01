#ifndef FT_MATRIX_H
# define FT_MATRIX_H

# include "ft_types.h"
# include "ft_vector.h"
# include "ft_memory.h"

void			*matrix_create(size_t rows, size_t cols, size_t type_size);
void			matrix_destroy(void *matrixptr);

void			*matrix_copy(void *matrixptr);
void			matrix_clear(void *matrixptr);

void			matrix_add_row(void *matrixptr);
void			matrix_add_col(void *matrixptr);

size_t			matrix_rows(void *matrixptr);
size_t			matrix_cols(void *rowptr);

#endif
