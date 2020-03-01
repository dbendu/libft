#ifndef FT_MEMORY_H
# define FT_MEMORY_H

# include "ft_types.h"

void	*ft_memchr(const void *mem, int val, size_t bytes);
void	*ft_memset(void *mem, int c, size_t bytes);
void	*ft_memrchr(const void *mem, int val, size_t bytes);
void	*ft_memmove(void *destptr, const void *srcptr, size_t bytes);
void	*ft_memcpy(void *dstptr, const void *srcptr, size_t bytes);
int		ft_memcmp(const void *memptr1, const void *memptr2, size_t bytes);

#endif
