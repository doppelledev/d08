/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouahib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 14:47:18 by aouahib           #+#    #+#             */
/*   Updated: 2019/09/02 18:31:11 by aouahib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_issep(char c)
{
	return (c == ' ' || c == '\r' || c == '\n' || c == '\t');
}

int		ft_count_words(char *str)
{
	int count;
	int word;

	word = 1;
	count = 0;
	while (*str)
	{
		if (ft_issep(*str))
			word = 1;
		else if (word)
		{
			count++;
			word = 0;
		}
		str++;
	}
	return (count);
}

char	*ft_skip_sep(char *s)
{
	return (s);
}

void	ft_fill(char *dest, char *src, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	char	*word;
	int		size;
	int		i;

	size = ft_count_words(str) + 1;
	words = (char **)malloc(size * sizeof(char *));
	if (!words)
		return (0);
	i = 0;
	while (i < size - 1)
	{
		while (ft_issep(*str))
			str++;
		word = str;
		while (*str && !ft_issep(*str))
			str++;
		words[i] = (char *)malloc(str - word + 1);
		ft_fill(words[i], word, str - word);
		i++;
	}
	words[size - 1] = 0;
	return (words);
}
