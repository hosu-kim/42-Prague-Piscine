/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:40:37 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/18 20:42:01 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	iteration;

	iteration = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 || power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		iteration *= nb;
		power--;
	}
	return (iteration);
}

// #include <stdio.h>

// int	main()
// {
// 	int	number;
// 	int	exponent;

// 	number = 4;
// 	exponent = 3;

// 	printf("%d", ft_iterative_power(number, exponent));
// 	return (0);
// }