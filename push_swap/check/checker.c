/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:43:40 by snakita           #+#    #+#             */
/*   Updated: 2022/01/07 18:43:41 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_next_line(char **line)
{
	char	*buffer;
	char	join;
	int		i;
	int		bytes_buf;

	i = 0;
	buffer = (char *) malloc(10000);
	if (!buffer)
		return (-1);
	bytes_buf = read(0, &join, 1);
	while (bytes_buf && join != '\n' && join != '\0')
	{
		if (join != '\n' && join != '\0')
			buffer[i] = join;
		i++;
		bytes_buf = read(0, &join, 1);
	}
	buffer[i] = '\0';
	*line = buffer;
	free(buffer);
	return (bytes_buf);
}

void	go_command(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strncmp(line, "pa", 3))
		check_pa(a, b);
	else if (!ft_strncmp(line, "pb", 3))
		check_pb(a, b);
	else if (!ft_strncmp(line, "ra", 3))
		check_ra(a);
	else if (!ft_strncmp(line, "rb", 3))
		check_rb(b);
	else if (!ft_strncmp(line, "rr", 3))
		check_rr(a, b);
	else if (!ft_strncmp(line, "rra", 4))
		check_rra(a);
	else if (!ft_strncmp(line, "rrb", 4))
		check_rrb(b);
	else if (!ft_strncmp(line, "rrr", 4))
		check_rrr(a, b);
	else if (!ft_strncmp(line, "sa", 3))
		check_sa(a);
	else if (!ft_strncmp(line, "sb", 3))
		check_sb(b);
	else if (!ft_strncmp(line, "ss", 3))
		check_ss(a, b);
	else
		ft_error("Error\n");
}

void	checker(t_stack **a, int count)
{
	t_stack	*b;
	char	*line;

	b = NULL;
	while (get_next_line(&line))
		go_command(a, &b, line);
	if (check_finish(a, count) && !b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

int	main(int argc, char **argv)
{
	int		count_arg;
	t_stack	*stack_a;
	char	*str;
	char	**str_arg;

	if (argc < 2)
		exit(EXIT_FAILURE);
	str = ft_strgo(argv + 1);
	str_arg = ft_split(str, ' ');
	count_arg = ft_count_arg(str_arg);
	check(str_arg, count_arg);
	stack_a = creat_stack(str_arg);
	checker(&stack_a, count_arg);
	exit(EXIT_SUCCESS);
}
