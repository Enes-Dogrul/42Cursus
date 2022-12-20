/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:40:41 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/19 21:42:30 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	stack_temp1_b(t_stack *stack)
{
	int	x;

	stack->temp = malloc(sizeof(int) * stack->stack_b_size);
	x = 0;
	while (x < stack->stack_b_size)
	{
		stack->temp[x] = stack->stack_b[x];
		x++;
	}
	free(stack->stack_b);
	stack->stack_b = malloc(sizeof(int) * stack->stack_b_size);
	stack->stack_b[0] = stack->stack_a[0];
	x = 1;
	while (x < stack->stack_b_size)
	{
		stack->stack_b[x] = stack->temp[x - 1];
		x++;
	}
	free(stack->temp);
}

void	stack_temp1_a(t_stack *stack)
{
	int	x;

	stack->temp = malloc(sizeof(int) * (stack->stack_a_size));
	x = 0;
	while (x < stack->stack_a_size)
	{
		stack->temp[x] = stack->stack_a[x + 1];
		x++;
	}
	free(stack->stack_a);
	stack->stack_a = malloc(sizeof(int) * (stack->stack_a_size));
	x = 0;
	while (x < stack->stack_a_size)
	{
		stack->stack_a[x] = stack->temp[x];
		x++;
	}
	free(stack->temp);
}

void	pb(t_stack *stack)
{
	stack->stack_a_size -= 1;
	stack->stack_b_size += 1;
	stack_temp1_b(stack);
	stack_temp1_a(stack);
	ft_putstr_fd("pb\n", 1);
}
