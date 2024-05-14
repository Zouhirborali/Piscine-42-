/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:08:51 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/28 17:41:18 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	cc(char *str)
{
	int	b;
	int	x;
	int	xx;

	b = 1;
	x = 0;
	xx = 0;
	while (str[x] != x)
	{
		if ((((str[x] >= 9 && str[x] <= 13) || str[x] == 32) && xx == 0) 
			|| str[x] == '-' || str[x] == '+')
		{
			if (str[x] == '-' && ++xx)
				b *= -1;
			if (str[x] == '+' && ++xx)
				b *= +1;
		}
		else if (((str[x] >= 9 && str[x] <= 13) || str[x] == 32) && xx > 0)
			return (0);
		else
			break ;
		x++;
	}
	return (b);
}

int	ft_atoi(char *str)
{
	int	x;
	int	xx;
	int	re;

	x = 0;
	xx = 0;
	re = 0;
	while ((str[x] != x && str[x] >= '0' && str[x] <= '9')
		|| ((str[x] == '-' || str[x] == '+' || ((str[x] >= 9 && str[x] <= 13)
					||str[x] == 32)) && xx == 0))
	{
		if (str[x] >= '0' && str[x] <= '9')
		{
			re *= 10;
			re += str[x] - 48;
			xx = 1;
		}
		x++;
	}
	re *= cc(str);
	return (re);
}
/*
int main()
{
	char str[] = " -----+-- 1234ab567";
	
	printf("%d",ft_atoi(str) );
	// at this point num contains the converted number

	return 0;
}*/