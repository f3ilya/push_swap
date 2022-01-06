/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:24:09 by snakita           #+#    #+#             */
/*   Updated: 2022/01/06 21:24:10 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	sort2(t_stack **a)
{
	if ((*a)->num > (*a)->next->num)
		sa(a);
}

static void	sort3(t_stack **a)
{
	int	one;
	int	two;
	int	three;

	one = (*a)->num;
	two = (*a)->next->num;
	three = (*a)->next->next->num;
	if (one < two && two > three && three > one)
	{
		sa(a);
		ra(a);
	}
	else if (one > two && two > three)
	{
		sa(a);
		rra(a);
	}
	else if (one > two && two < three && three < one)
		ra(a);
	else if (one > two && two < three && three > one)
		sa(a);
	else if (one < two && two > three && three < one)
		rra(a);
}

static void	sort4_5(t_stack **a, t_stack **b)
{
	while (ft_lstsize(a) > 3)
	{
		if (pos_in_stack(a, min_in_stack(a)) == 1)
			pb(a, b);
		else if (pos_in_stack(a, min_in_stack(a)) == 2)
			ra(a);
		else
			rra(a);
	}
	sort3(a);
	while (ft_lstsize(b) > 0)
		pa(a, b);
}

void	sort(t_stack **a, int count, int *neworder1)
{
	t_stack	*b;

	b = NULL;
	ft_index(*a, neworder1, count);
	if (count == 2)
		sort2(a);
	else if (count == 3)
		sort3(a);
	else if (count == 4 || count == 5)
		sort4_5(a, &b);
	else if (count > 5)
		global_sort(a, &b, count);
}
