#ifndef BYTES_ARR_H
# define BYTES_ARR_H

# include "ft_types.h"
# include "ft_utils.h"
# include "mode_libft.h"

typedef struct s_barr	t_barr;

t_barr					*barr_create(size_t bits);
void					barr_destroy(t_barr *arr);

void					barr_set_as_true(t_barr *arr, size_t bit_index);
void					barr_set_as_false(t_barr *arr, size_t bit_index);
void					barr_fill_false(t_barr *arr);
void					barr_fill_true(t_barr *arr);

t_bool					barr_valueof(t_barr *arr, size_t index);
size_t					barr_size(t_barr *arr);
char					*barr_to_string(t_barr *arr);

#endif
