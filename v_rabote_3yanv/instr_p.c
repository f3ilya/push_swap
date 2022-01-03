#include "push_swap.h"

void	pb(Stack_t **a, Stack_t **b)
{
	Stack_t *tmp;
	Stack_t	*head;

	if (*a)
	{
		tmp = (*a)->next;
		head = (*a);
		head->next = NULL;
		ft_lstadd_front(b, head);
		*a = tmp;
		ft_putstr_fd("pb\n", 1);
	}
}

void	pa(Stack_t **a, Stack_t **b)
{
	Stack_t *tmp;
	Stack_t *head;

	if (*b)
	{
		tmp = (*b)->next;
		head = *b;
		head->next = NULL;
		ft_lstadd_front(a, head);
		*b = tmp;
		ft_putstr_fd("pa\n", 1);
	}
}
