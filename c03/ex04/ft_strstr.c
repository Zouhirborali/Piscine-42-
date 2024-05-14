/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:26:20 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/03 15:42:01 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	xx;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x])
	{
		xx = 0;
		while (str[x + xx] == to_find[xx])
		{
			if (to_find[xx + 1] == '\0')
			{
				return (str + x);
			}
			xx++;
		}
		x++;
	}
	return (0);
}
/*
int main(void)
{

   char haystack[20] = "TuPoiorialsPoiynt";
   char needle[10] = "Poiy";


   printf("%s", ft_strstr(haystack, needle));

}*/