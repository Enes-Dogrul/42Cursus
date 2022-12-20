/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:53:28 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/20 00:22:26 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	selection_sort(int *temp_stack, int size)
{
	int	i;
	int	j;
	int	lowestnumber;
	int	temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		lowestnumber = i;
		j = i + 1;
		while (j < size)
		{
			if (temp_stack[j] < temp_stack[lowestnumber])
				lowestnumber = j;
			j++;
		}
		temp = temp_stack[i];
		temp_stack[i] = temp_stack[lowestnumber];
		temp_stack[lowestnumber] = temp;
		i++;
	}
}
