/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:54:58 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/20 00:53:43 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	short_argv_2(t_stack *stack)
{
	if (check_sorted(stack) == 1)
		sa(stack);
}

void	short_argv_3(t_stack *stack)
{
	while (check_sorted(stack))
	{
		if (stack->stack_a[0] > stack->stack_a[2]
			&& stack->stack_a[1] > stack->stack_a[0])
			rra(stack);
		else if (stack->stack_a[0] > stack->stack_a[1]
			&& stack->stack_a[0] > stack->stack_a[2])
			ra(stack);
		else
			sa(stack);
	}
}

void	short_argv_5_10(t_stack *stack)
{
	while (stack->stack_a_size > 3)
	{
		first_lower(stack);
		pb(stack);
	}
	if (check_sorted(stack))
		short_argv_3(stack);
	while (stack->stack_b_size > 0)
		pa(stack);
}

void	short_sort(t_stack *stack)
{
	if (stack->stack_a_size == 2)
		short_argv_2(stack);
	else if (stack->stack_a_size == 3)
		short_argv_3(stack);
	else if (stack->stack_a_size >= 4 && stack->stack_a_size <= 10)
		short_argv_5_10(stack);
	else if (stack->stack_a_size > 10 && stack->stack_a_size <= 100)
		short_argv_11_100(stack, 0, 0, 0);
	else
		sort_argv_100_long(stack, 0, 0, 0);
}
