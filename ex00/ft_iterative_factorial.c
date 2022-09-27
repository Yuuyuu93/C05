/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:16:53 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/27 18:20:13 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}
/*
#include <strdio.h>

int	main(void)
{
	int	c = ft_iterative_factorial(2);
	printf("%d", c);
	return (0);
}
*/
