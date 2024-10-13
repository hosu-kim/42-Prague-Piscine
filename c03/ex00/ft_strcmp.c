/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:19:43 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/15 18:33:09 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] \
			&& s1[count] \
			&& s2[count])
		count++;
	return (s1[count] - s2[count]);
}

// #include <stdio.h>
// int main()
// {
// 	char	compare_1[] = "1234";
// 	char	compare_2[] = "123422";
// 	printf("Result: %d\n", ft_strcmp(compare_1, compare_2));
// }
// It returns 0 if all characters of two strings are equal
// It compares the value difference of the last characters in the ASCII code