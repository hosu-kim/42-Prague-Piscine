/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:30:27 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/14 12:50:49 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[0] != '\0' && str[count] != '\0')
	{
		if (!(str[count] >= 'a' && str[count] <= 'z'))
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
// 	char one[] = "hello";
// 	char two[] = "0ffff";
// 	char three[] = "01he";

// 	printf("Result for one is %d\n", ft_str_is_lowercase(one));
// 	printf("Result for two is %d\n", ft_str_is_lowercase(two));
// 	printf("Result for three is %d\n", ft_str_is_lowercase(three));

// 	return 0;
// }