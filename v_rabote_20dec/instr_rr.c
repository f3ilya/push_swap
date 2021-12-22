#include "push_swap.h"

void	rra(Stack_t **a)
{
	Stack_t	*tmp;
	Stack_t *end;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		end = ft_lstlast(*a);
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next = NULL;
		ft_lstadd_front(a, end);
		ft_putstr_fd("rra\n", 1);
	}
}

void	rrb(Stack_t **b)
{
	Stack_t	*tmp;
	Stack_t *end;

	if ((*b) && (*b)->next)
	{
		tmp = *b;
		end = ft_lstlast(*b);
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next = NULL;
		ft_lstadd_front(b, end);
		ft_putstr_fd("rrb\n", 1);
	}
}

void	rrr(Stack_t **a, Stack_t **b)
{
	rra(a);
	rrb(b);
}
