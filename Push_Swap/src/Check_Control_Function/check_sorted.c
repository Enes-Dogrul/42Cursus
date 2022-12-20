/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:18:21 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/15 21:18:22 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

int	check_sorted(t_stack *stack)
{
	int	x;

	x = 0;
	while (x < stack->stack_a_size - 1)
	{
		if (stack->stack_a[x] > stack->stack_a[x + 1])
			return (1);
		x++;
	}
	return (0);
}
