/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:49:04 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/12 20:02:19 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	another_glass;

	another_glass = *a;
	*a = *b;
	*b = another_glass;
}

// #include <stdio.h>

// int main(void)
// {
//     int     redbull;
//     int     beer;
//     int     *can;
//     int     *glass;

//     redbull = 300;
//     beer = 500;

//     can = &redbull;
//     glass = &beer;

//     printf("Before swapping: can = %d, glass = %d\n", redbull, beer);
//     // Let's swap redbull and beer!
//     // Nobody doesn't wanna mix them lol
//     ft_swap(can, glass);

//     printf("After swapping: can = %d, glass = %d\n", redbull, beer);
//     return 0;
// }