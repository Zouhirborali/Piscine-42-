/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:46:32 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/03 23:28:32 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			break ;
		}
		x++;
	}
	if (s1[x] - s2[x] < 0)
		x = -1;
	else if (s1[x] - s2[x] > 0)
		x = 1;
	else
		x = 0;
	return (x);
}

void	swapp(int x, int xx, int ac, char **av)
{
	char	*c;

	x = 1;
	while (x < ac)
	{
		xx = x + 1;
		while (av[xx])
		{
			if (ft_strcmp(av[x], av[xx]) > 0)
			{
				c = av[x];
				av[x] = av[xx];
				av[xx] = c;
			}
			xx++;
		}
		x++;
	}
}

void	p(char c[])
{
	int	x;

	x = 0;
	while (c[x])
	{
		write(1, &c[x], 1);
		x++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int		x;
	int		xx;

	x = 1;
	xx = 2;
	swapp(x, xx, ac, av);
	x = 1;
	while (x < ac)
	{
		p(av[x]);
		x++;
	}
	return (0);
}
