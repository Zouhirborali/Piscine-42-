/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:42:00 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/04 12:52:57 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	d;
	unsigned int	i;
	unsigned int	t;

	s = 0;
	d = 0;
	i = 0;
	t = 0;
	while (dest[d])
		d++;
	while (src[s])
		s++;
	t = s + d;
	if (size <= d)
		return (size + s);
	while ((d < size - 1) && src[i])
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (t);
}
/*
int main(void)
{

    char dest[] = "aa";
    const char *src = "ccbbcc";//6
    
    
    printf("%d\n", ft_strlcat(dest,src,1));
    printf("%s\n",dest );


}*/