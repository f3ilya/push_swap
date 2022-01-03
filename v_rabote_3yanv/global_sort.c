#include "push_swap.h"

void	begin_sort(Stack_t **a, Stack_t **b, t_push *push)
{
	int size_a;
	int i;

	size_a = ft_lstsize(a);
	i = -1;
	while (++i < size_a)
	{
		if ((*a)->index <= push->mid)
			pb(a, b);
		else
		{
			if (ft_lstsize(b) > 1 && (*b)->index < (push->mid / 2))
				rr(a, b);
			else
				ra(a);
		}
	}
}

void	global_sort(Stack_t **a, Stack_t **b, int count)
{
	t_push *push;

	push = ft_push_new();
	push->min = min_in_stack(a)->index;
	push->max = max_in_stack(a)->index;
	push->mid = push->max / 2 + push->min;
	begin_sort(a, b, push);
	while (!check_finish(a))
	{
		if (!*b)
			in_b(a, b, push);
		else
			in_a(a, b, push);
	}
}
