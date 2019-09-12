/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouahib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:19:51 by aouahib           #+#    #+#             */
/*   Updated: 2019/09/05 15:18:47 by aouahib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

void			ft_putchar(char c);

void			ft_putstr(char *str);

void			ft_putnbr(int nbr, int firts);

void			ft_putarr(char **tab);

void			ft_show_tab(struct s_stock_par *par);

#endif
