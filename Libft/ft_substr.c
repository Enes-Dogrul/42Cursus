/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:50:05 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/15 15:33:22 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	y;
	char	*p;

	p = (char *)malloc(sizeof(*s) * (len + 1));
	if (!p)
		return (NULL);
	x = 0;
	y = 0;
	while (s[x])
	{
		if (x >= start && y < len)
		{
			p[y] = s[x];
			y++;
		}
		x++;
	}
	p[y] = '\0';
	return (p);
}
