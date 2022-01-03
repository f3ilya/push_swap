
#include "push_swap.h"

void	stackprint(Stack_t *stack, char *s)
{
	printf("%s\n", s);
	while (stack)
	{
		printf("%d\n", stack->num);
		stack = stack->next;
	}
}

int main(int argc, char **argv)
{
	int i;
	int k;
	Stack_t *stack_a;
	Stack_t *stack_b;
	char *str;
	char **str_arg;
	int *neworder1;

	stack_b = 0;
	k = 0;
	if (argc < 2)
		exit(EXIT_FAILURE);
	str = ft_strgo(argv + 1);
	str_arg = ft_split(str, ' ');
	i = ft_count_arg(str_arg);
	check(str_arg, i);
	stack_a = creat_stack(str_arg);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	stackprint(stack_a, "a:");
	stackprint(stack_b, "b:");
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	stackprint(stack_a, "a:");
	stackprint(stack_b, "b:");
	//stackprint(stack_a);
	neworder1 = neworder(str_arg, i);
	/*while(neworder1[k])
		printf("%d\n", neworder1[k++]);*/
	exit(EXIT_SUCCESS);
}