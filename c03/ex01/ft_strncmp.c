/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:19:41 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/15 18:43:06 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (0);
	while (s1[count] == s2[count] \
			&& s1[count] \
			&& s2[count] \
			&& count < n)
		count++;
	if (count == n)
		return (0);
	return (s1[count] - s2[count]);
}

// #include <stdio.h>
// int main()
// {
// 	unsigned int count_limit;
// 	char	compare_1[] = "12342232";
// 	char	compare_2[] = "123422";
// 	count_limit = 0;
// 	printf("Result: %d\n", ft_strncmp(compare_1, compare_2, count_limit));
// }
// // if condition: if count limit is set 0, return 0
// // while loop conditions:
// // 1. While two strings have the same characters
// // 2. Until the count reaches the last character of s1 or s2
// // 3. Until the count reaches the the count limit