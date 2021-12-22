#include "push_swap.h"

void	sa(Stack_t **a)
{
	int tmp;

	if ((*a) && (*a)->next)
	{
		tmp = (*a)->num;
		(*a)->num = (*a)->next->num;
		(*a)->next->num = tmp;
		ft_putstr_fd("sa\n", 1);
	}
}

void	sb(Stack_t **b)
{
	int tmp;

	if ((*b) && (*b)->next)
	{
		tmp = (*b)->num;
		(*b)->num = (*b)->next->num;
		(*b)->next->num = tmp;
		ft_putstr_fd("sb\n", 1);
	}
}

void	ss(Stack_t **a, Stack_t **b)
{
	sa(a);
	sb(b);
}
