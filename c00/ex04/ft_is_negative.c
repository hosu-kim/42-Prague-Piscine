/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 00:23:49 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/11 12:49:18 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int number)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (number >= 0)
	{
		write(1, &positive, 1);
	}
	else if (number < 0)
	{
		write(1, &negative, 1);
	}
}

/*
int main (void) // ex04 
{
	ft_is_negative(42);
	ft_is_negative(0);
	ft_is_negative(-10);
	return 0; // PPN
}
*/