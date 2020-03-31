#ifndef WARNING_H
# define WARNING_H

#include <stdarg.h>
#include "ft_types.h"
#include "ft_vector.h"
#include "ft_buf.h"

# define WARNING				(0)
# define ERROR					(1)

typedef t_bool			t_warning_type;



void			warning_create(void);
void			warning_add(t_warning_type type,
							int message_parts, ...);
void			warning_print(void);
void			warning_destroy(void);

#endif
