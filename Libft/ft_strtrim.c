/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:05:13 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/15 13:17:38 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_kontrol(char c, const char *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	basla;
	size_t	bitis;
	size_t	index;

	if (!s1 || !set)
		return (NULL);
	basla = 0;
	bitis = ft_strlen(s1);
	while (s1[basla] && ft_kontrol(s1[basla], set))
		basla++;
	while (bitis > basla && ft_kontrol(s1[bitis - 1], set))
		bitis--;
	p = malloc(sizeof(char) * bitis - basla + 1);
	if (!p)
		return (NULL);
	index = 0;
	while (basla < bitis)
		p[index++] = s1[basla++];
	p[index] = '\0';
	return (p);
}
