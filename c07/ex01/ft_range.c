/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:27:35 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/25 16:52:58 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	index;
	int	*result;

	if (min >= max)
	{
		return (NULL);
	}
	length = max - min;
	result = malloc(sizeof(int) * length);
	if (result == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (max > min)
	{
		result[index] = min;
		min++;
		index++;
	}
	return (result);
}

// int main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*counter;
// 	int	i = 0;
// 	int	size;

// 	min = 5;
// 	max = 10;
// 	size = max - min;
// 	counter = ft_range(min, max);
// 	while(i < size)
// 	{
// 		printf("%d", counter[i]);
// 		if (i != size - 1)
// 		{
// 			printf(", ");
// 		}
// 		i++;
// 	}
// }