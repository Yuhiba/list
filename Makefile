NAME		= lists

SRC			= src/main.c \
			src/my_params_in_list.c \
			src/my_list_size.c \
			src/my_rev_list.c \
			src/my_apply_on_list.c \
			src/my_apply_elm_eq_in_list.c \
			src/my_find_elm_eq_in_list.c \
			src/my_find_node_eq_in_list.c \
			src/my_rm_all_eq_from_list.c \
			src/my_add_list_to_list.c

INCLUDE 	= include

TEST_SRC	= test/my_find_elm_eq_in_list_test.c \
			src/my_find_elm_eq_in_list.c

TEST_OBJ	= $(TEST_SRC:.c=.o)

OBJ			= $(SRC:.c=.o)

CC			= gcc

RM			= rm -f

CFLAGS		+= -I $(INCLUDE) -Wextra -Wall -I/vagrant/lib/test/include
CFLAGS		+= -I /vagrant/lib/my/include
LDFLAGS		+= -L /vagrant/lib/my -lmy

all:		$(NAME)

$(NAME): 	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

test:		$(TEST_OBJ)
			$(CC) $^ -ltest -L/vagrant/lib/test -L/vagrant/lib/my -lmy

clean:
			$(RM) $(OBJ) $(TEST_OBJ)

fclean:		clean
			$(RM) $(NAME) ./a.out

re:			fclean clean

.PHONY:		all clean test fclean re