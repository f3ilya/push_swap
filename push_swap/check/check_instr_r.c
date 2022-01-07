/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instr_r.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:43:17 by snakita           #+#    #+#             */
/*   Updated: 2022/01/07 18:43:18 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_ra(t_stack **a)
{
	t_stack	*tmp;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		*a = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(a, tmp);
	}
}

void	check_rb(t_stack **b)
{
	t_stack	*tmp;

	if ((*b) && (*b)->next)
	{
		tmp = *b;
		*b = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(b, tmp);
	}
}

void	check_rr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		*a = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(a, tmp);
	}
	if ((*b) && (*b)->next)
	{
		tmp = *b;
		*b = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(b, tmp);
	}
}
