NAME =				libft.a

NAME_DEBUG =		libftdebug.a

#-------------------------------------------------------------------------------
#								SOURCE FILES
#-------------------------------------------------------------------------------

SRCS_BARR =			bits_arr_size.c				\
					bits_arr_create.c			\
					bits_arr_destroy.c			\
					bits_arr_valueof.c			\
					bits_arr_fill_true.c		\
					bits_arr_to_string.c		\
					bits_arr_fill_false.c		\
					bits_arr_set_as_true.c		\
					bits_arr_set_as_false.c		\
					private_convert_to_string.c

SRCS_BUF =			buf_get.c					\
					buf_flush.c					\
					buf_create.c				\
					buf_add_chr.c				\
					buf_add_str.c				\
					buf_destroy.c				\
					buf_add_line.c				\
					buf_flush_to.c				\
					buf_add_strn.c				\
					private_get_buf.c			\
					buf_printed_count.c

SRCS_COMPLEX =		complex_add.c				\
					complex_div.c				\
					complex_sub.c				\
					complex_init.c				\
					complex_mult.c				\
					complex_pow2.c				\
					complex_pow3.c

SRCS_LIST =			lstadd.c					\
					lstnew.c					\
					lstpop.c					\
					lstsize.c					\
					lstpurge.c					\
					lstappend.c					\
					lstdelete.c					\
					lstdelone.c					\
					lstextend.c					\
					lstpopback.c

SRCS_MATRIX =		matrix_rows.c				\
					matrix_cols.c				\
					matrix_copy.c				\
					matrix_clear.c				\
					matrix_create.c				\
					matrix_add_col.c			\
					matrix_add_row.c			\
					matrix_destroy.c

SRCS_MEMORY =		ft_memchr.c					\
					ft_memcmp.c					\
					ft_memcpy.c					\
					ft_memset.c					\
					ft_memmove.c				\
					ft_memrchr.c

SRCS_SORTS =		ft_bubble_sort.c

SRCS_STRING =		ft_strchr.c					\
					ft_strcmp.c					\
					ft_strdup.c					\
					ft_strequ.c					\
					ft_strlen.c					\
					ft_isalpha.c				\
					ft_isdigit.c				\
					ft_isspace.c				\

SRCS_UTILS =		ft_min.c					\
					ft_max.c					\
					ft_swap.c					\
					ft_atoi.c					\
					ft_error.c					\
					ft_calloc.c					\
					ft_assert.c					\
					ft_memitoa.c				\
					sizeof_num.c				\
					bytes_order.c				\
					get_next_line.c				\
					convert_to_bits.c			\

SRCS_VECTOR =		vec_copy.c					\
					vec_size.c					\
					vec_create.c				\
					vec_destroy.c				\
					vec_reserve.c				\
					vec_typesize.c				\
					vec_capacity.c				\
					vec_pushback.c				\
					vec_shrink_to_fit.c			\

#-------------------------------------------------------------------------------
#							SOURCE DIRECTORIES
#-------------------------------------------------------------------------------

DIR_BARR_SRCS =			bits_array

DIR_BUF_SRCS =			buf

DIR_COMPLEX_SRCS =		complex

DIR_LIST_SRCS =			list

DIR_MATRIX_SRCS =		matrix

DIR_MEMORY_SRCS =		memory

DIR_SORTS_SRCS =		sorts

DIR_STRING_SRCS =		string

DIR_UTILS_SRCS =		utils

DIR_VECTOR_SRCS =		vector

#-------------------------------------------------------------------------------
#							OBJECTS DIRECTORIES
#-------------------------------------------------------------------------------

DIR_OBJS =				./objs

DIR_BARR_OBJS =			$(addprefix $(DIR_OBJS)/, $(DIR_BARR_SRCS))

DIR_BUF_OBJS =			$(addprefix $(DIR_OBJS)/, $(DIR_BUF_SRCS))

DIR_COMPLEX_OBJS =		$(addprefix $(DIR_OBJS)/, $(DIR_COMPLEX_SRCS))

DIR_LIST_OBJS =			$(addprefix $(DIR_OBJS)/, $(DIR_LIST_SRCS))

DIR_MATRIX_OBJS =		$(addprefix $(DIR_OBJS)/, $(DIR_MATRIX_SRCS))

DIR_MEMORY_OBJS =		$(addprefix $(DIR_OBJS)/, $(DIR_MEMORY_SRCS))

DIR_SORTS_OBJS =		$(addprefix $(DIR_OBJS)/, $(DIR_SORTS_SRCS))

DIR_STRING_OBJS =		$(addprefix $(DIR_OBJS)/, $(DIR_STRING_SRCS))

DIR_UTILS_OBJS =		$(addprefix $(DIR_OBJS)/, $(DIR_UTILS_SRCS))

DIR_VECTOR_OBJS =		$(addprefix $(DIR_OBJS)/, $(DIR_VECTOR_SRCS))

#-------------------------------------------------------------------------------
#						CONVERT SOURCES TO OBJECTS
#-------------------------------------------------------------------------------

OBJ_BARR =			$(addprefix $(DIR_BARR_OBJS)/, $(SRCS_BARR:.c=.o))

OBJ_BUF =			$(addprefix $(DIR_BUF_OBJS)/, $(SRCS_BUF:.c=.o))

OBJ_COMPLEX =		$(addprefix $(DIR_COMPLEX_OBJS)/, $(SRCS_COMPLEX:.c=.o))

OBJ_LIST =			$(addprefix $(DIR_LIST_OBJS)/, $(SRCS_LIST:.c=.o))

OBJ_MATRIX =		$(addprefix $(DIR_MATRIX_OBJS)/, $(SRCS_MATRIX:.c=.o))

OBJ_MEMORY =		$(addprefix $(DIR_MEMORY_OBJS)/, $(SRCS_MEMORY:.c=.o))

OBJ_SORTS =			$(addprefix $(DIR_SORTS_OBJS)/, $(SRCS_SORTS:.c=.o))

OBJ_STRING =		$(addprefix $(DIR_STRING_OBJS)/, $(SRCS_STRING:.c=.o))

OBJ_UTILS =			$(addprefix $(DIR_UTILS_OBJS)/, $(SRCS_UTILS:.c=.o))

OBJ_VECTOR =		$(addprefix $(DIR_VECTOR_OBJS)/, $(SRCS_VECTOR:.c=.o))

OBJ_ALL =			$(OBJ_BUF)						\
					$(OBJ_BARR)						\
					$(OBJ_LIST)						\
					$(OBJ_UTILS)					\
					$(OBJ_SORTS)					\
					$(OBJ_MATRIX)					\
					$(OBJ_MEMORY)					\
					$(OBJ_STRING)					\
					$(OBJ_VECTOR)					\
					$(OBJ_COMPLEX)

#-------------------------------------------------------------------------------
#									INCLUDES
#-------------------------------------------------------------------------------

INCLUDES =			includes				\
					bits_array				\
					buf						\
					vector

#-------------------------------------------------------------------------------
#									FLAGS
#-------------------------------------------------------------------------------

FLAGS =			-Wall -Werror -Wextra $(addprefix -I , $(INCLUDES))

FLAGS_DEBUG =	-g -Wall -Werror -Wextra $(addprefix -I , $(INCLUDES))

#===============================================================================
#-------------------------------------------------------------------------------
#									RULES
#-------------------------------------------------------------------------------
#===============================================================================


#-------------------------------------------------------------------------------
#								COMPILING PROJECT
#-------------------------------------------------------------------------------

all: $(NAME)

$(NAME): $(DIR_OBJS) $(OBJ_ALL)
	ar rcs $(NAME) $(OBJ_ALL)
	ranlib $(NAME)

#-------------------------------------------------------------------------------
#						ALL NEEDFUL DIRECTORIES CREATING
#-------------------------------------------------------------------------------

$(DIR_OBJS):
	mkdir -p $(DIR_OBJS)
	mkdir -p $(DIR_BARR_OBJS)
	mkdir -p $(DIR_BUF_OBJS)
	mkdir -p $(DIR_COMPLEX_OBJS)
	mkdir -p $(DIR_LIST_OBJS)
	mkdir -p $(DIR_MATRIX_OBJS)
	mkdir -p $(DIR_MEMORY_OBJS)
	mkdir -p $(DIR_SORTS_OBJS)
	mkdir -p $(DIR_STRING_OBJS)
	mkdir -p $(DIR_UTILS_OBJS)
	mkdir -p $(DIR_VECTOR_OBJS)

#-------------------------------------------------------------------------------
#							COMPILING OBJECT FILES
#-------------------------------------------------------------------------------

$(DIR_BARR_OBJS)/%.o: $(DIR_BARR_SRCS)/%.c $(INCLUDES)
	gcc $(FLAGS) -o $@ -c $<

$(DIR_BUF_OBJS)/%.o: $(DIR_BUF_SRCS)/%.c $(INCLUDES)
	gcc $(FLAGS) -o $@ -c $<

$(DIR_COMPLEX_OBJS)/%.o: $(DIR_COMPLEX_SRCS)/%.c $(INCLUDES)
	gcc $(FLAGS) -o $@ -c $<

$(DIR_LIST_OBJS)/%.o: $(DIR_LIST_SRCS)/%.c $(INCLUDES)
	gcc $(FLAGS) -o $@ -c $<

$(DIR_MATRIX_OBJS)/%.o: $(DIR_MATRIX_SRCS)/%.c $(INCLUDES)
	gcc $(FLAGS) -o $@ -c $<

$(DIR_MEMORY_OBJS)/%.o: $(DIR_MEMORY_SRCS)/%.c $(INCLUDES)
	gcc $(FLAGS) -o $@ -c $<

$(DIR_SORTS_OBJS)/%.o: $(DIR_SORTS_SRCS)/%.c $(INCLUDES)
	gcc $(FLAGS) -o $@ -c $<

$(DIR_STRING_OBJS)/%.o: $(DIR_STRING_SRCS)/%.c $(INCLUDES)
	gcc $(FLAGS) -o $@ -c $<

$(DIR_UTILS_OBJS)/%.o: $(DIR_UTILS_SRCS)/%.c $(INCLUDES)
	gcc $(FLAGS) -o $@ -c $<

$(DIR_VECTOR_OBJS)/%.o: $(DIR_VECTOR_SRCS)/%.c $(INCLUDES)
	gcc $(FLAGS) -o $@ -c $<

#-------------------------------------------------------------------------------
#							RECOMPILE PROJECT
#-------------------------------------------------------------------------------

clean:
	rm -rf $(DIR_OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_DEBUG)

re: fclean all

c: clean

f: fclean

.PHONY: all clean fclean c f debug
