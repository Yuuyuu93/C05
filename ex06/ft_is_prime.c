/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:11:54 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/27 15:12:09 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	p;

	p = 2;
	if (nb < 2)
		return (0);
	while (p <= nb / p)
	{
		if (nb % p == 0)
			return (0);
		p++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("-10 = %d (0)\n", ft_sqrt(-10));
	printf("-1 = %d (0)\n", ft_sqrt(-1));
	printf("0 = %d (0)\n", ft_sqrt(0));
	printf("1 = %d (1)\n", ft_sqrt(1));
	printf("2 = %d (0)\n", ft_sqrt(2));
	printf("3 = %d (0)\n", ft_sqrt(3));
	printf("4 = %d (2)\n", ft_sqrt(4));
	printf("5 = %d (3)\n", ft_sqrt(9));
	printf("16 = %d (4)\n", ft_sqrt(16));
	printf("25 = %d (5)\n", ft_sqrt(16));
}
*/
