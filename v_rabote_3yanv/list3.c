#include "push_swap.h"

t_push	*ft_push_new()
{
	t_push *elem;

	elem = malloc(sizeof(t_push));
	if (elem)
	{
		elem->min = 0;
		elem->max = 0;
		elem->flag = 0;
		elem->mid = 0;
	}
	return (elem);
}

int	check_finish(Stack_t **a)
{
	Stack_t *list;

	list = *a;
	while (list)
	{
		if (list->index > list->next->index)
			return (0);
		list = list->next;
	}
	return (1);
}
