/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:18:31 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/04 22:35:37 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	strss(int size, char **strs, char *sep)
{
	int	i;
	int	p;
	int	re;

	i = 0;
	p = 0;
	re = 0;
	while (size > 0)
	{
		i = 0;
		while (*(strs[p] + i))
		{
			i++;
			re++;
		}
		i = 0;
		while (sep[i] && size -1 > 0)
		{
			i++;
			re++;
		}
		p++;
		size--; 
	}
	return (re);
}

int	ch_size(int size)
{
	char	*re;

	if (size > 0)
	{
		return (1);
	}
	re = malloc(1 * sizeof(char));
	re[0] = '\0';
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		p;
	int		r;
	char	*re;

	i = 0;
	p = 0;
	r = 0;
	if (!ch_size(size))
		return (0);
	re = malloc((strss(size, strs, sep) * sizeof(char)));
	while (size > 0)
	{
		i = 0;
		while (*(strs[p] + i))
			re[r++] = *(strs[p] + i++);
		i = 0;
		while (sep[i] && size -1 > 0)
			re[r++] = sep[i++];
		p++;
		size--;
	}
	return (re);
}

/*
int main() {
	// Write C code here
	char *strs[]={"nooo","hello","add"};
	char sep[]=" ";
	printf("%s",ft_strjoin(0,strs,sep));

	return 0;
}*/