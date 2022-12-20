/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:45:49 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/19 21:42:10 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	rr_ra(t_stack *stack)
{
	int	x;

	stack->temp = malloc(sizeof(int) * (stack->stack_a_size));
	x = 0;
	while (x < stack->stack_a_size)
	{
		stack->temp[x] = stack->stack_a[x];
		x++;
	}
	stack->temp1 = stack->stack_a[0];
	x = 0;
	while (x < stack->stack_a_size - 1)
	{
		stack->stack_a[x] = stack->temp[x + 1];
		x++;
	}
	x--;
	stack->stack_a[(stack->stack_a_size) - 1] = stack->temp1;
	free(stack->temp);
}

void	rr_rb(t_stack *stack)
{
	int	x;

	stack->temp = malloc(sizeof(int) * (stack->stack_b_size));
	x = 0;
	while (x < stack->stack_b_size)
	{
		stack->temp[x] = stack->stack_b[x];
		x++;
	}
	stack->temp1 = stack->stack_b[0];
	x = 0;
	while (x < stack->stack_b_size - 1)
	{
		stack->stack_b[x] = stack->temp[x + 1];
		x++;
	}
	stack->stack_b[(stack->stack_b_size) - 1] = stack->temp1;
	free(stack->temp);
}

void	rr(t_stack *stack)
{
	rr_ra(stack);
	rr_rb(stack);
	ft_putstr_fd("rr\n", 1);
}
