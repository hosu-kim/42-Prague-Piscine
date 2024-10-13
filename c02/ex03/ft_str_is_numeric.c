/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:30:38 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/14 12:50:20 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[0] != '\0' && str[count] != '\0')
	{
		if (!(str[count] >= '0' && str[count] <= '9'))
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
// 	char two[] = "01234";
// 	char three[] = "01he";

// 	printf("Result for one is %d\n", ft_str_is_numeric(one));
// 	printf("Result for one is %d\n", ft_str_is_numeric(two));
// 	printf("Result for one is %d\n", ft_str_is_numeric(three));

// 	return 0;
// }