/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:12:27 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/16 13:09:52 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	x;
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	x = ft_strlen(s1)+ft_strlen(s2);
	c = malloc(x * sizeof(char));
	if (!c)
		return (0);
	while (i < ft_strlen(s1))
	{
		c[i] = ((char *)s1)[i];
		i++;
	}
	while (i < x)
	{
		c[i] = ((char *)s2)[z];
		i++;
		z++;
	}
	c[i] = '\0';
	return (c);
}
