#include <stdlib.h>
#include "ft_buf.h"
#include "private_buf.h"
#include "ft_utils.h"

void			buf_create(int fd, size_t size)
{
	t_buf		**buf;

	buf = get_buf();
	if (!size)
		size = DEFAULT_BUFSIZE;
	*buf = malloc(sizeof(t_buf) + size);
	if (!buf)
		ft_error("can\'t allocate buffer", "buf_init", 0);
	(*buf)->size = size;
	(*buf)->pos = 0;
	(*buf)->fd = fd;
	(*buf)->printed = 0;
	(*buf)->buf = (void*)*buf + sizeof(t_buf);
}
