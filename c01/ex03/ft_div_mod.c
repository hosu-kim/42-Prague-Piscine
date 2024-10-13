/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:49:06 by hoskim            #+#    #+#             */
/*   Updated: 2024/06/12 20:02:50 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
//
// int main(void)
// {
// 	int a;
// 	int b;
// 	int division;
// 	int modulo;
//
// 	a = 5;
// 	b = 3;
//
// 	ft_div_mod(a, b, &division, &modulo);
// 	printf("%d divided by %d is %d\n", a, b, division);
// 	printf("The modulo of %d divided by %d is %d\n", a, b, modulo);
// 	return 0;
// }