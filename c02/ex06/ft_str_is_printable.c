/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 23:10:17 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/16 12:56:26 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 32) && (str[count] <= 126))
		{
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	char one[] = "\n";
// 	char two[] = "0fAff";
// 	char three[] = "01he";

// 	printf("Result for one is %d\n", ft_str_is_printable(one));
// 	printf("Result for two is %d\n", ft_str_is_printable(two));
// 	printf("Result for three is %d\n", ft_str_is_printable(three));

// 	return 0;
// }