/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lowest_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:38:16 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/19 21:34:32 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

int	find_lowest_number(t_stack *stack)
{
	int	x;
	int	lowest_number;

	x = 0;
	lowest_number = stack->stack_a[0];
	while (x < stack->stack_a_size)
	{
		if (lowest_number > stack->stack_a[x])
			lowest_number = stack->stack_a[x];
		x++;
	}
	return (lowest_number);
}
