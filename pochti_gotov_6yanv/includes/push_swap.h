/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:58:06 by snakita           #+#    #+#             */
/*   Updated: 2022/01/06 20:58:08 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct stack_tag {
	int					num;
	int					index;
	int					flag;
	struct stack_tag	*next;
	struct stack_tag	*prev;
}	t_stack;

typedef struct s_push {
	int	next;
	int	max;
	int	mid;
	int	flag;
}	t_push;

t_push	*ft_push_new(void);
t_stack	*creat_stack(char **str);
t_stack	*ft_lstnew(int num);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*min_in_stack(t_stack **stack);
t_stack	*max_in_stack(t_stack **stack);
void	global_sort(t_stack **a, t_stack **b, int count);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_index(t_stack *a, const int *neworder1, int count);
void	sort(t_stack **a, int count, int *neworder1);
void	ft_error(char *str);
void	check(char **str, int n);
void	ft_putstr_fd(char *s, int fd);
void	ft_sort_string_tab(int *tab, int n);
int		ft_isdigit(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_lstsize(t_stack **lst);
int		pos_in_stack(t_stack **stack, t_stack *elem);
int		check_finish(t_stack **a, int count);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);

char	*ft_strgo(char **str);
int		*neworder(char **str, int n);
int		ft_count_arg(char **str);
int		ft_swap_atoi(char *str);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif
