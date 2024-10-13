/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:12:15 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/25 16:53:17 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		count;
	char	*duplicate;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	duplicate = (char *)malloc(sizeof(char) * (count + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (src[count] != '\0')
	{
		duplicate[count] = src[count];
		count++;
	}
	duplicate[count] = '\0';
	return (duplicate);
}

// int main(void)
// {
// 	char *str[] = "Modify me!";
// 	char *copy;

// 	copy = ft_strdup(str);
// 	printf("%s", copy);
// }