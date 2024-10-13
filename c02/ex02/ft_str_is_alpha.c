/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:17:25 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/13 21:16:00 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!((str[count] >= 'A' && str[count] <= 'Z') \
		|| (str[count] >= 'a' && str[count] <= 'z')))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

// #include <stdio.h>
//
// int main()
// {
// 	char one[] = "hello";
// 	char two[] = "he11o";
// 	char three[] = "hell0";
//
// 	printf("Result for one is %d\n", ft_str_is_alpha(one));
// 	printf("Result for one is %d\n", ft_str_is_alpha(two));
// 	printf("Result for one is %d\n", ft_str_is_alpha(three));
//
// 	return 0;
// }