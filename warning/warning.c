#include "warning.h"



// void							warning_list_add(t_warning_list *warning_list,
// 												 t_warning *new_warning,
// 												 t_warning_type type)
// {
// 	if (type == ERROR)
// 	{
// 		if (!warning_list->errors)
// 		{
// 			warning_list->errors = new_warning;
// 			warning_list->errors_end = new_warning;
// 		}
// 		else
// 		{
// 			warning_list->errors_end->next = new_warning;
// 			warning_list->errors_end = new_warning;
// 		}
// 	}
// 	else
// 	{
// 		if (!warning_list->warnings)
// 		{
// 			warning_list->warnings = new_warning;
// 			warning_list->warnings_end = new_warning;
// 		}
// 		else
// 		{
// 			warning_list->warnings_end->next = new_warning;
// 			warning_list->warnings_end = new_warning;
// 		}
// 	}
// }





// t_warning		*warning_create(const char *message)
// {
// 	t_warning	*warning;
// 	size_t		message_lenght;

// 	message_lenght = ft_strlen(message);
// 	warning = malloc(sizeof(t_warning) + message_lenght + 1);
// 	warning->message = (void*)warning + sizeof(t_warning);
// 	ft_memcpy(warning->message, message, message_lenght + 1);
// 	warning->next = NULL;
// 	return (warning);
// }


// void			warning_list_print(const t_warning_list *warning_list)
// {
// 	t_warning	*iter;

// 	buf_create(2, 1024);
// 	iter = warning_list->warnings;
// 	while (iter)
// 	{
// 		buf_add_strn("\e[38;5;99mWarning\e[0m: ", 23);
// 		buf_add_line(iter->message);
// 		iter = iter->next;
// 	}
// 	if (warning_list->errors_end && warning_list->warnings)
// 		buf_add_chr('\n', 1);
// 	iter = warning_list->errors;
// 	while (iter)
// 	{
// 		buf_add_strn("\e[38;5;001mError\e[0m: ", 22);
// 		buf_add_line(iter->message);
// 		iter = iter->next;
// 	}
// 	buf_destroy();
// }

// void		warning_list_destroy(t_warning_list *warning_list)
// {
// 	t_warning	*temp;

// 	while (warning_list->errors)
// 	{
// 		temp = warning_list->errors->next;
// 		free(warning_list->errors);
// 		warning_list->errors = temp;
// 	}
// 	while (warning_list->warnings)
// 	{
// 		temp = warning_list->warnings->next;
// 		free(warning_list->warnings);
// 		warning_list->warnings = temp;
// 	}
// 	free(warning_list);
// }



// void		add_warning(t_warning_list *warnings, t_warning_type type,
// 						int message_parts, ...)
// {
// 	t_vector_char	*parts;
// 	t_vector_sizet	parts_lenghts;
// 	size_t			total_lenght;
// 	size_t			cur_lenght;
// 	char			*msg_part;
// 	va_list			argptr;
// 	char			*full_message;

// 	total_lenght = 0;
// 	parts = vec_create(message_parts, sizeof(t_vector_char));
// 	parts_lenghts = vec_create(message_parts, sizeof(size_t));
// 	va_start(argptr, message_parts);
// 	for (int cur_part = 0; cur_part < message_parts; ++cur_part)
// 	{
// 		msg_part = va_arg(argptr, char*);
// 		cur_lenght = ft_strlen(msg_part);
// 		total_lenght += cur_lenght;
// 		vec_pushback(&parts, &msg_part);
// 		vec_pushback(&parts_lenghts, &cur_lenght);
// 	}
// 	full_message = build_error_message(message_parts, parts,
// 									   parts_lenghts, total_lenght);
// 	warning_list_add(warnings, warning_create(full_message), type);
// 	free(full_message);
// 	vec_destroy(&parts);
// 	vec_destroy(&parts_lenghts);
// }
