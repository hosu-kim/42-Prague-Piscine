/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 23:21:39 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/16 15:56:28 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

// #include <stdio.h>
// int	main()
// {
// 	char	string[] = "modify me";
// 	printf("--------------------------------------------------------\n");
// 	printf("\"%s\" has %d characters\n", string, ft_strlen(string));
// }