/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:17:02 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/03 15:41:55 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a])
	{
		a++;
	}
	while (src[b] && nb)
	{
		dest[a] = src[b];
		b++;
		a++;
		nb--;
	}
	dest[a] = '\0';
	return (dest);
}
