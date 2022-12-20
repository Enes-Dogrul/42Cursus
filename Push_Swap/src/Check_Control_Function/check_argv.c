/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:18:29 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/20 01:41:07 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/push_swap.h"

void	struct_split(char **av, t_stack *stack)
{
	char	**tmp;
	int		x;

	x = 0;
	if (av[1][0] == '\0')
		exit(1);
	tmp = ft_split(av[1], ' ');
	if (check_argv(tmp, 0, 0) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	else
		x = check_argv(tmp, 0, 0);
	create_stack(stack, x);
	x = 0;
	while (x < stack->stack_a_size)
	{
		stack->stack_a[x] = ft_atoi_with_error(tmp[x], 0, 1);
		x++;
	}
	if (x == 1)
		exit(0);
	free(tmp);
}

void	struct_argv(int ac, char **av, t_stack *stack)
{
	int	x;

	create_stack(stack, ac - 1);
	x = 0;
	while (x < ac - 1)
	{
		if (check_argv(&av[x + 1], 0, 0) == 0)
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}	
		stack->stack_a[x] = ft_atoi_with_error(av[x + 1], 0, 1);
		x++;
	}
	if (x == 1)
		exit(0);
}

int	check_argv(char **tmp, int x, int y)
{
	while (tmp[y])
	{
		x = 0;
		while (tmp[y][x])
		{
			if (!((tmp[y][x] <= '9' && tmp[y][x] >= '0')
				|| tmp[y][x] == 32 || tmp[y][x] == '-'))
				return (0);
			x++;
		}
		y++;
	}
	return (y);
}
