/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:19:28 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/15 18:39:37 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_count;
	unsigned int	src_count;

	src_count = 0;
	dest_count = 0;
	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	while (src[src_count] != '\0' && src_count < nb)
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
// 	unsigned int count_limit; // modify me
// 	char	head[500] = "hello"; // modify me
// 	char	tail[] = "there"; // modify me
// 	count_limit = 3;
// 	printf("%s", ft_strncat(tail, head, count_limit));
// }