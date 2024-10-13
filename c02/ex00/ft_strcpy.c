/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:23:52 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/14 11:54:48 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char source[7] = "Hello!";
// 	char destination[] = "42 prague";
// 	printf("before: %s\n", destination);
// 	ft_strcpy(destination, source);
// 	printf("after: %s\n", destination);
// 	return 0;
// }