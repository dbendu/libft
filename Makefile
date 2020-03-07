SRCS =			bits_array/*.c				\
				complex/*.c					\
				memory/*.c					\
				string/*.c					\
				vector/*.c					\
				matrix/*.c					\
				utils/*.c					\
				sorts/*.c					\
				list/*.c					\
				buf/*.c						


all:
	gcc -c -Wall -Werror -Wextra $(SRCS) -I includes
	ar rcs libft.a *.o
	ranlib libft.a

debug:
	gcc -g -c -Wall -Werror -Wextra $(SRCS) -I includes
	ar rcs libftdebug.a *.o
	ranlib libftdebug.a

d:
	@clear
	@gcc -g -Wall -Werror -Wextra main.c libftdebug.a -I includes

c:
	@rm -f *.o

f: c
	@rm -f libft.a libftdebug.a a.out