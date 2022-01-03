
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

typedef struct s_push {
	int min;
	int	max;
	int	mid;
	int flag;
} t_push;

t_push	*ft_push_new();
Stack_t	*creat_stack(char **str);
Stack_t	*ft_lstnew(int num);
Stack_t	*ft_lstlast(Stack_t *lst);
Stack_t	*ft_lstfirst(Stack_t *lst);
Stack_t	*min_in_stack(Stack_t **stack);
Stack_t	*max_in_stack(Stack_t **stack);
void	global_sort(Stack_t **a, Stack_t **b, int count);
void	stackprint(Stack_t *stack, char *s);
void	ft_lstadd_front(Stack_t **lst, Stack_t *new);
void	ft_lstadd_back(Stack_t **lst, Stack_t *new);
void	ft_index(Stack_t *a, const int *neworder1, int count);
void	sort(Stack_t **a, Stack_t **b, int count, int *neworder1);
void	ft_error(char *str);
void	check(char **str, int n);
void	ft_putstr_fd(char *s, int fd);
void    ft_sort_string_tab(int *tab, int n);
int	ft_isdigit(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_lstsize(Stack_t **lst);
int	pos_in_stack(Stack_t **stack, Stack_t *elem);
int	check_finish(Stack_t **a);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);

char	*ft_strgo(char **str);
int *neworder(char **str, int n);
int	ft_count_arg(char **str);
int	ft_swap_atoi(char *str);

void	sa(Stack_t **a);
void	sb(Stack_t **b);
void	ss(Stack_t **a, Stack_t **b);
void	pb(Stack_t **a, Stack_t **b);
void	pa(Stack_t **a, Stack_t **b);
void	ra(Stack_t **a);
void	rb(Stack_t **b);
void	rr(Stack_t **a, Stack_t **b);
void	rra(Stack_t **a);
void	rrb(Stack_t **b);
void	rrr(Stack_t **a, Stack_t **b);

#endif
