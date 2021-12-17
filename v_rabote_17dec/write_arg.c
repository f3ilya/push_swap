#include "push_swap.h"

char	*ft_strgo(char **str)
{
	char *res;
	int	i;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (!res)
			res = ft_strdup(str[i++]);
		else
		{
			res = ft_strjoin(res, " ");
			res = ft_strjoin(res, str[i++]);
		}
	}
	return (res);
}

int	ft_swap_atoi(char *str)
{
	int i;
	int k;
	long int n;

	i = 0;
	k = 1;
	n = 0;

	if (str[i] == '-')
		k = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!ft_isdigit(str[i]))
		ft_error("Error\n");
	while (str[i] > 47 && str[i] < 58)
	{
		n = n * 10 + k * (str[i++] - 48);
		if (n < -2147483648 || n > 2147483647)
			ft_error("Error\n");
	}
	if (!ft_isdigit(str[i]) && str[i] != '\0')
		ft_error("Error\n");
	return (n);
}

Stack_t	*creat_stack(char **str)
{
	int i;
	Stack_t *res;

	i = -1;
	res = 0;
	while (str[++i])
		ft_lstadd_back(&res, ft_lstnew(ft_swap_atoi(str[i])));
	return (res);
}

void    ft_sort_string_tab(int *tab, int n)
{
	int i;
	int j;
	int t;

	i = -1;
	while (++i < n)
	{
		j = 1;
		while ((j + i) < n)
		{
			if (tab[i] > tab[j + i])
			{
				t = tab[i];
				tab[i] = tab[j + i];
				tab[j + i] = t;
			}
			j++;
		}
	}
}

int *neworder(char **str, int n)
{
	int *res;
	int i;

	res = malloc(sizeof(int) * (n + 1));
	if (res)
	{
		i = -1;
		while (++i < n)
			res[i] = ft_swap_atoi(str[i]);
		res[i] = '\0';
		ft_sort_string_tab(res, n);
	}
	return (res);
}
