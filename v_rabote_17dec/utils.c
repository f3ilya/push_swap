#include "push_swap.h"

void	check(char **str, int n)
{
	int i;
	int k;

	i = -1;
	while (++i < n)
	{
		k = 1;
		while ((i + k) < n)
		{
			if (ft_strncmp(str[i], str[i + k], 10))
				k++;
			else
				ft_error("Error\n");
		}
	}
}

void	ft_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(EXIT_FAILURE);
}

void	ft_free(char **str)
{
	int i;

	i = -1;
	while (str[++i])
		free(str[i]);
}

int	ft_count_arg(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str)
	{
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		j = -1;
		while (s2[++j])
			str[j + i] = s2[j];
		str[j + i] = '\0';
		free((void *)s1);
		return (str);
	}
	return (NULL);
}
