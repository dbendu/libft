#ifndef FT_BUF_H
# define FT_BUF_H

# include <unistd.h>
# include "ft_types.h"
# include "ft_utils.h"
# include "ft_memory.h"
# include "ft_string.h"
# include "mode_libft.h"

void					buf_create(int fd, size_t bufsize);
size_t					buf_destroy(void);

char					*buf_get(size_t *symbols_in_buf);
void					buf_flush(void);
void					buf_flush_to(int fd);
size_t					buf_printed_symbols_count(void);

void					buf_add_str(const char *str);
void					buf_add_chr(char chr, size_t times);
void					buf_add_line(char *str);


#endif
