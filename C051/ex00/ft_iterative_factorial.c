/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:15:00 by vabad-ro          #+#    #+#             */
/*   Updated: 2025/11/24 22:18:50 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb > 1)
	{
		r *= nb;
		nb--;
	}
	return (r);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(-10));
	return (0);
}*/
