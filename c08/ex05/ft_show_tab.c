/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:51:29 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/05 19:23:17 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	p(char c)
{
	write(1, &c, 1);
}

void	p_p(char *c)
{
	int	x;

	x = 0;
	while (c[x])
	{
		p(c[x]);
		x++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		p('-');
		nb *= -1;
	}
	if (nb == -2147483648)
	{
		p('2');
		ft_putnbr(147483648);
	}
	else if (nb <= 9)
	{
		p(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	x;

	x = 0;
	while (par[x].str)
	{
		p_p(par[x].str);
		write(1, "\n", 1);
		ft_putnbr(par[x].size);
		write(1, "\n", 1);
		p_p(par[x].copy);
		write(1, "\n", 1);
		x++;
	}
}
