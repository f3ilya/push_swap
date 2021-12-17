
#ifndef MYSTACK_H
# define MYSTACK_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct stack_tag {
	int num;
	int index;
	int flag;
	struct stack_tag *next;
	struct stack_tag *prev;
} Stack_t;

Stack_t	*creat_stack(char **str);
Stack_t 	*ft_lstnew(int num);
Stack_t 	*ft_lstlast(Stack_t *lst);
Stack_t 	*ft_lstfirst(Stack_t *lst);
void	ft_lstadd_back(Stack_t **lst, Stack_t *new);
void	ft_error(char *str);
void	check(char **str, int n);
void	ft_putstr_fd(char *s, int fd);
void    ft_sort_string_tab(int *tab, int n);
int	ft_isdigit(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);

char	*ft_strgo(char **str);
int *neworder(char **str, int n);
int	ft_count_arg(char **str);
int	ft_swap_atoi(char *str);

#endif
