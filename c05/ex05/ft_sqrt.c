/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:38:10 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/20 17:28:58 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	root = 0;
	while (root <= nb / 2 && root <= 46341)
	{
		if (root * root == nb)
		{
			return (root);
		}
		root++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int number;

// 	number = 1;
// 	printf("%d", ft_sqrt(number));
// 	return (0);
// }