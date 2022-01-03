#include "push_swap.h"

void	ft_index(Stack_t *a, const int *neworder1, int count)
{
	int	i;
	Stack_t	*list;

	list = a;
	while (list)
	{
		i = -1;
		while (++i < count)
		{
			if (neworder1[i] == list->num)
				list->index = i;
		}
		list = list->next;
	}
}

int	ft_lstsize(Stack_t **lst)
{
	Stack_t	*list;
	int	i;

	i = 0;
	list = *lst;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

Stack_t	*min_in_stack(Stack_t **stack)
{
	Stack_t	*min;
	Stack_t	*lst;

	min = *stack;
	lst = *stack;
	while (lst)
	{
		if (min->num > lst->num)
			min = lst;
		lst = lst->next;
	}
	return (min);
}

Stack_t	*max_in_stack(Stack_t **stack)
{
	Stack_t	*max;
	Stack_t	*lst;

	max = *stack;
	lst = *stack;
	while (lst)
	{
		if (max->num < lst->num)
			max = lst;
		lst = lst->next;
	}
	return (max);
}

int	pos_in_stack(Stack_t **stack, Stack_t *elem)
{
	Stack_t *lst;
	int i;

	i = 1;
	lst = *stack;
	while (lst != elem)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
