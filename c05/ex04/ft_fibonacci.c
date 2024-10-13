/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:40:34 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/18 20:41:29 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index -2) + ft_fibonacci(index - 1));
}

// // // 0 1 1 2 3 5 8 13 21
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_fibonacci(8));
// 	return (0);
// }