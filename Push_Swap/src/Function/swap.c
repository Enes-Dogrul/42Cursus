/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:49:57 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/19 21:41:41 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	sa(t_stack *stack)
{
	stack->temp1 = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = stack->temp1;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *stack)
{
	stack->temp1 = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = stack->temp1;
	ft_putstr_fd("sb\n", 1);
}
