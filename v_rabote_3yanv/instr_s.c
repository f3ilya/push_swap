#include "push_swap.h"

void	sa(Stack_t **a)
{
	Stack_t *tmp;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		(*a) = (*a)->next;
		tmp->next = (*a)->next;
		(*a)->next = tmp;
		ft_putstr_fd("sa\n", 1);
	}
}

void	sb(Stack_t **b)
{
	Stack_t *tmp;

	if ((*b) && (*b)->next)
	{
		tmp = *b;
		(*b) = (*b)->next;
		tmp->next = (*b)->next;
		(*b)->next = tmp;
		ft_putstr_fd("sb\n", 1);
	}
}

void	ss(Stack_t **a, Stack_t **b)
{
	sa(a);
	sb(b);
}
