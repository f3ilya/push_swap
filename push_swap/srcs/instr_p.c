/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:23:30 by snakita           #+#    #+#             */
/*   Updated: 2022/01/06 21:23:32 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*head;

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

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*head;

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
