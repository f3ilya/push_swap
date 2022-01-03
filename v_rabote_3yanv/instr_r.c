#include "push_swap.h"

void	ra(Stack_t **a)
{
	Stack_t	*tmp;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		*a = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(a, tmp);
		ft_putstr_fd("ra\n", 1);
	}
}

void	rb(Stack_t **b)
{
	Stack_t	*tmp;

	if ((*b) && (*b)->next)
	{
		tmp = *b;
		*b = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(b, tmp);
		ft_putstr_fd("rb\n", 1);
	}
}

void	rr(Stack_t **a, Stack_t **b)
{
	ra(a);
	rb(b);
}
