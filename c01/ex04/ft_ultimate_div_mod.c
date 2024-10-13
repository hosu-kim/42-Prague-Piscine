/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:09:13 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/12 20:04:43 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remainder;

	division = *a / *b;
	remainder = *a % *b;
	*a = division;
	*b = remainder;
}

// #include <stdio.h>
//
// int main(void)
// {
// 	 int    a_number;
// 	 int    another_number;
//
// 	a_number = 10;
// 	another_number = 9;
//
// 	printf("Before: a = %d, b = %d\n", a_number, another_number);
// 	ft_ultimate_div_mod(&a_number, &another_number);
// 	printf("After: a = %d, b = %d\n", a_number, another_number);
// }