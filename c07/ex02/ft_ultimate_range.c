/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:27:46 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/25 16:52:40 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	index;
	int	*range_array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	range_array = malloc(sizeof(int) * length);
	if (range_array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = range_array;
	index = 0;
	while (max > min)
	{
		range_array[index] = min;
		min++;
		index++;
	}
	return (index);
}

// int main()
// {
// 	int	min;
// 	int	max;
// 	int	*result;
// 	int	num_elements;
// 	int	i;

// 	min = 5;
// 	max = 10;
// 	num_elements = ft_ultimate_range(&result, min, max);
// 	i = 0;
// 	while(i < num_elements)
// 	{
// 		printf("%d", result[i]);
// 		if (i != num_elements - 1)
// 		{
// 			printf(", ");
// 		}
// 		i++;
// 	}
// 	return (0);
// }