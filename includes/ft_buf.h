#ifndef FT_BUF_H
# define FT_BUF_H

# include <unistd.h>
# include "ft_types.h"
# include "ft_memory.h"
# include "ft_string.h"

# define DEFAULT_BUFSIZE		4096

void					buf_create(int fd, size_t size);
void					buf_destroy(void);

char					*buf_get(size_t *elems);
void					buf_flush(void);
void					buf_flush_to(int fd);
size_t					buf_printed_symbols_count(void);

void					buf_add_str(const char *str);
void					buf_add_chr(char chr, size_t times);
void					buf_add_line(char *str);


#endif
