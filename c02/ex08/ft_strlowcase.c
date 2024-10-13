/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:16:50 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/15 20:05:58 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char str[7] = "Hello!";
// 	ft_strlowcase(str);
// 	printf("%s\n", str);
// 	return (0);
// }