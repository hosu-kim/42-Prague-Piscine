/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 00:00:29 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/11 12:49:05 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	count;

	count = '0';
	while (count <= '9')
	{
		write(1, &count, 1);
		count++;
	}
}

/*
int main (void) // ex03
{
	ft_print_numbers();
	return 0;
}
*/