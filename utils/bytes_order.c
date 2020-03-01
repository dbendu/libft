#include "ft_utils.h"

int		bytes_order(void)
{
	uint16_t		n;
	unsigned char	c;

	n = 1;
	c = *(unsigned char*)&n;
	if (c)
		return (FT_LITTLE_ENDIAN);
	else
		return (FT_BIG_ENDIAN);
}
