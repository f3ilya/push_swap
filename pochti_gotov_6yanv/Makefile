SRCS	= srcs/push_swap.c\
					srcs/global_sort.c srcs/instr_p.c srcs/instr_r.c srcs/instr_rr.c srcs/instr_s.c\
					srcs/sort.c srcs/write_arg.c\
 					utils/utils.c utils/utils2.c utils/ft_split.c utils/list.c utils/list2.c utils/list3.c
OBJS	= ${SRCS:.c=.o}
NAME	= push_swap

SRCS_B	= srcs/pipex_bonus.c\
					utils/utils.c utils/utils2.c utils/utils3.c
OBJS_B	= ${SRCS_B:.c=.o}

HDRS	= -I./includes/push_swap.h

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror ${HDRS}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				${CC} ${HDRS} ${OBJS} -o ${NAME}

all:		${NAME}

bonus:		${OBJS_B}
				${CC} ${HDRS} ${OBJS_B} -o ${NAME}

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
