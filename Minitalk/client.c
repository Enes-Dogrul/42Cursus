/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:18:49 by edogrul           #+#    #+#             */
/*   Updated: 2022/06/14 16:24:26 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "Libft/libft.h"

void	send_it(int pid, char *string)
{
	int	x;

	while (*string)
	{
		x = 7;
		while (x >= 0)
		{
			if (*string >> x & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			x--;
		}
		string++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		send_it(pid, argv[2]);
	}
	return (0);
}
