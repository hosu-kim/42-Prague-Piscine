/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 23:30:09 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/11 12:48:53 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 'a';
	while (count <= 'z')
	{
		write(1, &count, 1);
		count++;
	}
}

/*
int main (void) // ex01
{
	ft_print_alphabet();
	return 0;
}
*/