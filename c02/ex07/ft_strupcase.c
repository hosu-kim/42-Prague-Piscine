/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 18:52:50 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/14 20:16:13 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char str[7] = "Hello!";
// 	ft_strupcase(str);
// 	printf("%s\n", str);
// 	return (0);
// }