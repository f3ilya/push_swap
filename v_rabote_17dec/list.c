#include "push_swap.h"

Stack_t 	*ft_lstnew(int num)
{
	Stack_t 	*elem;

	elem = malloc(sizeof(Stack_t));
	if (elem)
	{
		elem->num = num;
		elem->index = 0;
		elem->flag = 0;
		elem->prev = NULL;
		elem->next = NULL;
	}
	return (elem);
}

void	ft_lstadd_back(Stack_t **lst, Stack_t *new)
{
	Stack_t 	*list;

	list = *lst;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = new;
		new->prev = *lst;
	}
	else
		*lst = new;
}

Stack_t 	*ft_lstlast(Stack_t *lst)
{
	Stack_t 	*list;

	list = lst;
	if (list)
	{
		while (list->next)
			list = list->next;
	}
	return (list);
}

Stack_t 	*ft_lstfirst(Stack_t *lst)
{
	Stack_t 	*list;

	list = lst;
	if (list)
	{
		while (list->prev)
			list = list->prev;
	}
	return (list);
}
