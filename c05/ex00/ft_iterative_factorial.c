/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:40:43 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/18 20:40:44 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}

// #include <stdio.h>

// int	main()
// {
// 	int number;

// 	number = 4;
// 	printf("%d", ft_iterative_factorial(number));
// 	return (0);
// }