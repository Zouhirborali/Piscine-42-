/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:15:03 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/21 17:15:13 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str != '\0') 
	{
		x++;
		str++;
	}
	return (x);
}

/*
int main ()
{
    char xx[]= {"abcdfghjjmm511mjj"};
    int x =ft_strlen(xx);
    printf("Length : %d", x);
}*/