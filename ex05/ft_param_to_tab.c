/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouahib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:29:32 by aouahib           #+#    #+#             */
/*   Updated: 2019/09/05 14:52:02 by aouahib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = ft_strlen(src) + 1;
	dest = (char *)malloc(len);
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

struct s_stock_par	ft_str_to_param(char *str)
{
	struct s_stock_par	s;

	if (str)
	{
		s.size_param = ft_strlen(str);
		s.str = str;
		s.copy = ft_strdup(str);
		s.tab = ft_split_whitespaces(str);
	}
	else
		s.str = 0;
	return (s);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*params;
	int					i;

	ac++;
	params = (struct s_stock_par *)malloc(ac * sizeof(struct s_stock_par));
	if (!params)
		return (0);
	i = 0;
	while (i < ac - 1)
	{
		params[i] = ft_str_to_param(av[i]);
		i++;
	}
	params[i] = ft_str_to_param(0);
	return (params);
}
