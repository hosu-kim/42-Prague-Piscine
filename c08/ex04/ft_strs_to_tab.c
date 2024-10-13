/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:19:18 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/26 18:42:33 by hoskim           ###   ########.fr       */
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			count;

	tab = malloc(sizeof(t_stock_str) * (ac +1));
	if (tab == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < ac)
	{
		tab[count].str = av[count];
		tab[count].copy = ft_strdup(av[count]);
		tab[count].size = ft_strlen(av[count]);
		count++;
	}
	tab[count].str = 0;
	return (tab);
}

// int	main(void)
// {
//     char *strings[] = {"Hello", "world", "42", "Prague"};
//     int count = 4;
//     t_stock_str *result = ft_strs_to_tab(count, strings);
//     int i = 0;

//     if (result == NULL)
//     {
//         printf("Error allocating memory\n");
//         return (1);
//     }

//     while (i < count)
//     {
//         printf("Original string: %s\n", result[i].str);
//         printf("Duplicate string: %s\n", result[i].copy);
//         printf("Length: %d\n", result[i].size);
//         i++;
//     }

//     i = 0;
//     while (i < count)
//     {
//         free(result[i].copy);
//         i++;
//     }
//     free(result);

//     return (0);
// }
