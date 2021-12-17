
#include "push_swap.h"

/*void	stackprint(Stack_t *stack)
{
	size_t i;

	i = stack->top;
	while (i > 0)
	{
		i--;
		printf("%d\n", stack->data[i]);
	}
}*/

int main(int argc, char **argv)
{
	int i;
	int k;
	Stack_t *stack_a;
	char *str;
	char **str_arg;
	int *neworder1;

	k = 0;
	if (argc < 2)
		exit(EXIT_FAILURE);
	str = ft_strgo(argv + 1);
	str_arg = ft_split(str, ' ');
	i = ft_count_arg(str_arg);
	check(str_arg, i);
	stack_a = creat_stack(str_arg);
	neworder1 = neworder(str_arg, i);
	while(neworder1[k])
		printf("%d\n", neworder1[k++]);
	exit(EXIT_SUCCESS);
}