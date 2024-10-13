/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:40:31 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/18 20:43:17 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 || power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

// #include <stdio.h>

// int	main()
// {
// 	int	number;
// 	int	exponent;

// 	number = 4;
// 	exponent = 3;

// 	printf("%d", ft_recursive_power(number, exponent));
// 	return (0);
// }