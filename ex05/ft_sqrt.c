/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:00:57 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/27 15:08:03 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	s;

	s = 1;
	if (nb > 0)
	{
		while (s * s <= nb)
		{
			if (s * s == nb)
				return (s);
			else if (s >= 46340)
				return (0);
			s++;
		}
	}
	return (0);
}
/*
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
