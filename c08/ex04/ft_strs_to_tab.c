/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:56:22 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/05 19:20:57 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	stlenn(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

char	*dump(char *c)
{
	char	*cop;
	int		i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	cop = malloc(i * sizeof(cop) + 1);
	if (!cop)
	{
		return (0);
	}
	i = 0;
	while (c[i])
	{
		cop[i] = c[i];
		i++;
	}
	cop[i] = '\0';
	return (cop);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*re;
	int			i;

	i = 0;
	re = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!re)
	{
		return (0);
	}
	while (i < ac)
	{
		re[i].size = stlenn(av[i]);
		re[i].str = av[i];
		re[i].copy = dump(av[i]);
		i++;
	}
	re[i].str = 0;
	return (re);
}
