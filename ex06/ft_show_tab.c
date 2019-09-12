/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouahib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:34:36 by aouahib           #+#    #+#             */
/*   Updated: 2019/09/05 15:18:51 by aouahib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
	ft_putchar('\n');
}

void	ft_putnbr(int nbr, int first)
{
	if (!nbr)
	{
		if (first)
			ft_putstr("0");
		return ;
	}
	ft_putnbr(nbr / 10, 0);
	ft_putchar(nbr % 10 + '0');
	if (first)
		ft_putchar('\n');
}

void	ft_putarr(char **tab)
{
	while (*tab)
		ft_putstr(*tab++);
}

void	ft_show_tab(struct s_stock_par *par)
{
	while (par->str)
	{
		ft_putstr(par->copy);
		ft_putnbr(par->size_param, 1);
		ft_putarr(par->tab);
		par++;
	}
}
