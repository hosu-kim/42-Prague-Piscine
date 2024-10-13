/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:32:42 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/14 12:51:29 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[0] != '\0' && str[count] != '\0')
	{
		if (!(str[count] >= 'A' && str[count] <= 'Z'))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	char one[] = "HELLO";
// 	char two[] = "0fAff";
// 	char three[] = "01he";

// 	printf("Result for one is %d\n", ft_str_is_uppercase(one));
// 	printf("Result for two is %d\n", ft_str_is_uppercase(two));
// 	printf("Result for three is %d\n", ft_str_is_uppercase(three));

// 	return 0;
// }