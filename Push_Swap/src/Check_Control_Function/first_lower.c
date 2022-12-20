/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_lower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:33:48 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/20 00:00:51 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

int	lowest_index_finder(t_stack *stack, int lowest_number)
{
	int	x;
	int	index;

	index = 0;
	x = 0;
	while (x < stack->stack_a_size)
	{
		if (stack->stack_a[x] == lowest_number)
			index = x;
		x++;
	}
	return (index);
}

void	buyuk_bulucu(t_stack *stack, int sayi, int index, int x)
{
	if ((stack->stack_a_size / 2) < index)
	{
		x = stack->stack_a_size / 2;
		while (stack->stack_a_size)
		{
			if (stack->stack_a[0] == sayi)
				break ;
			else
				rra(stack);
			x++;
		}
	}
	else
	{
		while (x < (stack->stack_a_size / 2))
		{
			if (stack->stack_a[0] == sayi)
				break ;
			else
				ra(stack);
			x++;
		}
	}
}

void	lowest_first(t_stack *stack, int index)
{
	int	sayi;

	sayi = stack->stack_a[index];
	buyuk_bulucu(stack, sayi, index, 0);
}

void	first_lower(t_stack *stack)
{
	int	index;

	index = lowest_index_finder(stack, find_lowest_number(stack));
	lowest_first(stack, index);
}
