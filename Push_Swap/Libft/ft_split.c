/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 00:44:06 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/20 00:44:06 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_place(char **str, char const *s1, char ch, int wordcount)
{
	int		index;
	int		word_len;
	int		word;

	word = 0;
	index = 0;
	word_len = 0;
	while (word < wordcount)
	{
		while (s1[index] != '\0' && s1[index] == ch)
			index++;
		while (s1[index] != '\0' && s1[index] != ch)
		{
			word_len++;
			index++;
		}
		str[word] = ft_substr(s1, index - word_len, word_len);
		word_len = 0;
		word++;
	}
	str[word] = 0;
	return (str);
}

static int	strcount(char const *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		wrdcnt;

	if (!s)
		return (0);
	wrdcnt = strcount(s, c);
	str = (char **)malloc(sizeof(char *) * wrdcnt + 1);
	if (!str)
		return (0);
	str = ft_place(str, s, c, wrdcnt);
	return (str);
}
