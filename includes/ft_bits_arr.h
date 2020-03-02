#ifndef BYTES_ARR_H
# define BYTES_ARR_H

# include "ft_types.h"
# include "ft_utils.h"

typedef struct			s_barr
{
	size_t				size_in_int_ws;
	size_t				size_in_bits;
	t_int_ws			*data;
}						t_barr;

t_barr					*barr_create(size_t bits);
void					barr_destroy(t_barr *barr);

char					*barr_to_string(t_barr *barr);
void					barr_set_as_true(t_barr *barr, size_t bit_index);
void					barr_set_as_false(t_barr *barr, size_t bit_index);
size_t                  barr_size(t_barr *arr);
void            barr_fill_false(t_barr *arr);
void            barr_fill_truth(t_barr *arr);

#endif
