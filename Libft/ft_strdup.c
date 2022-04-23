/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:16:46 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/07 18:02:32 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*t;
	int		x;
	int		y;

	x = ft_strlen(s);
	t = malloc((x * sizeof(char)) + 1);
	if (!t)
		return (NULL);
	y = 0;
	while (y < x)
	{
		t[y] = s[y];
		y++;
	}
	t[y] = '\0';
	return (t);
}
