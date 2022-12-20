/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:51:48 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/20 00:55:50 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	stack_copy(t_stack *stack, int *temp_stack)
{
	int	x;

	x = 0;
	while (x < stack->stack_a_size)
	{
		temp_stack[x] = stack->stack_a[x];
		x++;
	}
	x = 0;
}

void	middle_sort_1(t_stack *stack, int *temp_stack, int keynbr)
{
	int	x;

	x = 0;
	while (x < stack->stack_a_size)
	{
		if (stack->stack_a[x] <= temp_stack[keynbr])
		{
			lowest_first(stack, x);
			pb(stack);
			x = 0;
		}
		x++;
	}
}

void	short_argv_11_100(t_stack *stack, int x, int artis, int keynbr)
{
	int	*temp_stack;

	temp_stack = malloc(sizeof(int) * stack->stack_a_size);
	x = 0;
	stack_copy(stack, temp_stack);
	selection_sort(temp_stack, stack->stack_a_size);
	keynbr = stack->stack_a_size / 4;
	artis = keynbr;
	while (x < 3)
	{
		middle_sort_1(stack, temp_stack, keynbr);
		keynbr += artis;
		x++;
	}
	while (stack->stack_a_size)
	{
		first_lower(stack);
		pb(stack);
	}
	while (stack->stack_b_size)
	{
		first_biggest(stack);
		pa(stack);
	}
	free(temp_stack);
}
