/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:17:34 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/20 02:33:41 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/push_swap.h"

/*void	print_stack(t_stack *stack)
{
	int	x;

	x = 0;
	printf("Stack [A]\n");
	while (x < stack->stack_a_size)
	{
		printff("Index [%d] : %d\n", x, stack->stack_a[x]);
		x++;
	}
	x = 0;
	printf("Stack [B]\n");
	while (x<stack->stack_b_size)
	{
		printf("Index [%d] : %d\n",x,stack->stack_b[x]);
		x++;
	}
	printf("------------------------\n");
}*/

void	check_repeat(t_stack *stack)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < stack->stack_a_size - 1)
	{
		x = y + 1;
		while (x < stack->stack_a_size)
		{
			if (stack->stack_a[y] == stack->stack_a[x])
			{
				ft_putstr_fd("Error\n", 2);
				exit (0);
			}
			x++;
		}
		y++;
	}
}

void	create_stack(t_stack *stack, int size)
{
	stack->stack_a = malloc(sizeof(int) * size);
	stack->stack_b = malloc(sizeof(int));
	stack->stack_a_size = size;
	stack->stack_b_size = 0;
	stack->hamlesayisi = 0;
}

int	struct_init(int ac, char **av, t_stack *stack)
{
	if (ac <= 1)
		printf("Argüman 1 Den Az");
	else if (ac == 2)
		struct_split(av, stack);
	else if (ac > 2)
		struct_argv(ac, av, stack);
	find_min(stack);
	find_max(stack);
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	if (argc >= 2)
	{
		struct_init(argc, argv, &stack);
		check_repeat(&stack);
		if (!(check_sorted(&stack)))
		{
			free(stack.stack_a);
			free(stack.stack_b);
			return (0);
		}
		short_sort(&stack);
		if (!(check_sorted(&stack)))
		{
			free(stack.stack_a);
			free(stack.stack_b);
			return (0);
		}
	}
	else if (argc == 1)
		return (0);
	return (0);
}
