/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:39:23 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/17 19:14:00 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	args_count;
	int	char_count;

	args_count = 1;
	while (args_count < argc)
	{
		char_count = 0;
		while (argv[args_count][char_count])
		{
			write(1, &argv[args_count][char_count], 1);
			char_count++;
		}
		write (1, "\n", 1);
		args_count++;
	}
}
