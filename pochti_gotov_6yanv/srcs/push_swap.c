/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:24:02 by snakita           #+#    #+#             */
/*   Updated: 2022/01/06 21:24:03 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int		count_arg;
	t_stack	*stack_a;
	char	*str;
	char	**str_arg;
	int		*neworder1;

	if (argc < 2)
		exit(EXIT_FAILURE);
	str = ft_strgo(argv + 1);
	str_arg = ft_split(str, ' ');
	count_arg = ft_count_arg(str_arg);
	check(str_arg, count_arg);
	stack_a = creat_stack(str_arg);              // написать проверку на отсортированный список аргументов
	neworder1 = neworder(str_arg, count_arg);
	sort(&stack_a, count_arg, neworder1);
	exit(EXIT_SUCCESS);
}
