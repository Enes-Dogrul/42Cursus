/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:33:56 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/15 21:35:45 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	find_max(t_stack *stack)
{
	int	x;

	x = 0;
	stack->max = stack->stack_a[0];
	while (stack->stack_a[x + 1])
	{
		if (stack->stack_a[x] < stack->stack_a[x + 1])
			stack->max = stack->stack_a[x + 1];
		x++;
	}
}

void	find_min(t_stack *stack)
{
	int	x;

	x = 0;
	stack->min = stack->stack_a[0];
	while (stack->stack_a[x + 1])
	{
		if (stack->stack_a[x] > stack->stack_a[x + 1])
			stack->min = stack->stack_a[x];
		x++;
	}
}
