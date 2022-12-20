/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_biggest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:31:34 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/20 00:01:32 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

int	biggest_index_finder(t_stack *stack, int biggest_number)
{
	int	x;
	int	index;

	index = 0;
	x = 0;
	while (x < stack->stack_a_size)
	{
		if (stack->stack_b[x] == biggest_number)
			index = x;
		x++;
	}
	return (index);
}

int	biggest_index_finder2(t_stack *stack, int biggest_number)
{
	int	x;
	int	index;

	index = 0;
	x = 0;
	while (x < stack->stack_b_size)
	{
		if (stack->stack_b[x] == biggest_number)
			index = x;
		x++;
	}
	return (index);
}

void	buyuk_bulucu2(t_stack *stack, int sayi, int index, int x)
{
	if ((stack->stack_b_size / 2) < index)
	{
		x = stack->stack_b_size / 2;
		while (stack->stack_b_size)
		{
			if (stack->stack_b[0] == sayi)
				break ;
			else
				rrb(stack);
			x++;
		}
	}
	else
	{
		while (x < (stack->stack_b_size / 2))
		{
			if (stack->stack_b[0] == sayi)
				break ;
			else
				rb(stack);
			x++;
		}
	}
}

void	bigger_first(t_stack *stack, int index)
{
	int	sayi;

	sayi = stack->stack_b[index];
	buyuk_bulucu2(stack, sayi, index, 0);
}

void	first_biggest(t_stack *stack)
{
	int	index;

	index = biggest_index_finder2(stack, find_biggest_number(stack));
	bigger_first(stack, index);
}
