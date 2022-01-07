/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instr_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:43:10 by snakita           #+#    #+#             */
/*   Updated: 2022/01/07 18:43:11 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_pa(t_stack **a, t_stack **b)
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
	}
}

void	check_pb(t_stack **a, t_stack **b)
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
	}
}
