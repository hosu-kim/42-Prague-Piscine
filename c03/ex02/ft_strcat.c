/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:19:38 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/15 18:20:55 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_count;
	int	src_count;

	src_count = 0;
	dest_count = 0;
	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	while (src[src_count] != '\0')
	{
		dest[dest_count + src_count] = src[src_count];
		src_count++;
	}
	dest[dest_count + src_count] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char	head[] = "hello"; // modify me
// 	char	tail[500] = "there"; // modify me
// 	printf("%s", ft_strcat(tail, head));
// }