#include <stdlib.h>
#include "ft_buf.h"
#include "private_buf.h"


void			buf_destroy(void)
{
	t_buf		*buf;

	buf_flush();
	buf = *get_buf();
	if (buf)
		free(buf);
}
