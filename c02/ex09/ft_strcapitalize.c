/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:17:26 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/03 12:42:44 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ch_fie(char str[], int x)
{
	if (str[x + 1] != '\0' && str[x + 1] >= 'a' && str[x + 1] <= 'z')
	{
		str[x + 1] -= 32;
	}
}

void	ch_fi(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] += 32;
		}
		x++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	ch_fi(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
		}
		else
		{
			ch_fie(str, i);
		}
		i++;
	}
	return (str);
}
