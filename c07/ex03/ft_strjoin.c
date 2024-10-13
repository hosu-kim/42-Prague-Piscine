/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:47:37 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/25 16:52:44 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length_count;

	length_count = 0;
	while (str[length_count] != '\0')
	{
		length_count++;
	}
	return (length_count);
}

int	ft_total_length(char **strs, int size, char *sep)
{
	int	count;
	int	total_length;

	count = 0;
	total_length = 0;
	while (count < size)
	{
		total_length += ft_strlen(strs[count]);
		count++;
	}
	total_length += (size - 1) * ft_strlen(sep);
	return (total_length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_index;
	int	src_index;

	dest_index = 0;
	src_index = 0;
	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}
	while (src[src_index] != '\0')
	{
		dest[dest_index + src_index] = src[src_index];
		src_index++;
	}
	dest[dest_index + src_index] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result_string;
	int		strs_index;
	int		total_length;

	if (size == 0)
	{
		result_string = malloc(sizeof(char));
		*result_string = '\0';
		return (result_string);
	}
	total_length = ft_total_length(strs, size, sep);
	result_string = malloc(total_length + 1);
	if (result_string == NULL)
		return (NULL);
	result_string[0] = '\0';
	strs_index = 0;
	while (strs_index < size)
	{
		ft_strcat(result_string, strs[strs_index]);
		if (strs_index < size - 1)
			ft_strcat(result_string, sep);
		strs_index++;
	}
	return (result_string);
}

// int	main(void)
// {
// 	char	*strings[4];
// 	char	*result;
// 	char	separator[] = "te, ";

// 	strings[0] = "Jak se má";
// 	strings[1] = "Čekej";
// 	strings[2] = "Ve C07 zemře";
// 	strings[3] = "ale hodně štěstí!";
// 	result = ft_strjoin(4, strings, separator);
// 	if (result != NULL)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
