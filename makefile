NAME		= push_swap

OBJS		= ${SRCS:.c=.o}
SRC			=  main.c radix.c simple_sort.c split.c utils.c reverse_rotate.c rotate.c push.c swap.c put.c list.c index.c free.c check_args.c
SRCS		= ${addprefix src/, ${SRC}}
CFLAGS 	= -Wall -Wextra -Werror -O3

HEADER		= push_swap.h

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "Compiling [%s]...%-42s${RESET}\r" $<

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nFinished : $(NAME)${RESET}"

all:	${NAME}

clean:
		@rm -rf ${OBJS}
		@echo "Removing objects...${RESET}"

fclean:	clean
		@rm -rf ${NAME}
		@echo "Removing ${NAME}...${RESET}"

re:		fclean all

.PHONY : all clean fclean re