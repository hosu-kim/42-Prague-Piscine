/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 15:56:20 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/16 15:56:21 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		print_char('-');
		nb *= -1;
	}
	if (nb < 10)
		print_char(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

// int main()
// {
// 	int my_number;

// 	my_number = 134;
// 	ft_putnbr(my_number);
// }
// // three if conditions:
// // 1. if nb is the lowest number in C.
// // 2. if nb is negative to print '-'.
// // 3. if nb is single digit.
// // 4. else to print all digits one by one.
