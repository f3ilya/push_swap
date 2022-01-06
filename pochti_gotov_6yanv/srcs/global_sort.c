/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:16:11 by snakita           #+#    #+#             */
/*   Updated: 2022/01/06 21:16:13 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	min(t_stack **a, t_stack **b, t_push *push)
{
	if ((*a)->index == push->next)
	{
		(*a)->flag = -1;
		ra(a);
		push->next++;
	}
	else if (ft_lstsize(b) > 0 && (*b)->index == push->next)
		pa(a, b);
	else if (ft_lstsize(b) > 2 && ft_lstlast(*b)->index == push->next)
		rrb(b);
	else if (ft_lstsize(b) > 1 && (*a)->next->index == push->next
		&& (*b)->next->index == push->next + 1)
		ss(a, b);
	else if ((*a)->next->index == push->next)
		sa(a);
	else
		return ;
	min(a, b, push);
}

static void	push_a(t_stack **a, t_stack **b, t_push *push)
{
	int	i;
	int	len;

	i = -1;
	len = ft_lstsize(b);
	while (++i < len && *b)
	{
		if ((*b)->index == push->next)
			min(a, b, push);
		else if ((*b)->index >= push->mid)
		{
			(*b)->flag = push->flag;
			pa(a, b);
		}
		else
			rb(b);
	}
	push->max = push->mid;
	push->mid = (push->max - push->next) / 2 + push->next;
	push->flag++;
}

static void	push_b(t_stack **a, t_stack **b, t_push *push)
{
	int	fl;

	fl = (*a)->flag;
	if ((*a)->flag == 0)
	{
		while ((*a)->flag != -1)
		{
			if ((*a)->index != push->next)
				pb(a, b);
			min(a, b, push);
		}
	}
	else if ((*a)->flag != 0)
	{
		while ((*a)->flag == fl)
		{
			if ((*a)->index != push->next)
				pb(a, b);
			min(a, b, push);
		}
	}
	if (*b)
		push->max = max_in_stack(b)->index;
	push->mid = (push->max - push->next) / 2 + push->next;
}

static void	begin_sort(t_stack **a, t_stack **b, t_push *push)
{
	int	size_a;
	int	i;

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
	push->max = push->mid;
	push->mid = (push->max - push->next) / 2 + push->next;
	push->flag++;
}

void	global_sort(t_stack **a, t_stack **b, int count)
{
	t_push	*push;

	push = ft_push_new();
	push->next = min_in_stack(a)->index;
	push->max = max_in_stack(a)->index;
	push->mid = push->max / 2 + push->next;
	begin_sort(a, b, push);
	while (!check_finish(a, count))
	{
		if (!*b)
			push_b(a, b, push);
		else
			push_a(a, b, push);
	}
}
