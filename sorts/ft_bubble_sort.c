#include "ft_sorts.h"

void			ft_bubble_sort(void *arr, size_t elems, size_t elem_size,
								int (*cmp) (const void *, const void *))
{
	void		*beg;
	void		*end;

	if (!elems || !elem_size || !cmp || !arr)
		ft_error("invalid params", "ft_bubble_sort", 0);
	--elems;
	end = arr + elems * elem_size;
	while (end > arr)
	{
		beg = arr;
		while (beg < end)
		{
			if (cmp(beg, end) < 0)
				ft_swap(beg, end, elem_size);
			beg += elem_size;
		}
		end -= elem_size;
	}
}
