/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:39:48 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/17 19:40:16 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_me(char *arg)
{
	int	count;

	count = 0;
	while (arg[count] != '\0')
	{
		write(1, &arg[count], 1);
		count++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		print_me(argv[0]);
	return (0);
}
