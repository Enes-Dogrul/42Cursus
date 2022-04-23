/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:16:56 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/16 13:11:04 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;

	i = 0;
	p = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!p)
		return (NULL);
	while (*s)
	{
		p[i] = (*f)(i, *s);
		s++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
