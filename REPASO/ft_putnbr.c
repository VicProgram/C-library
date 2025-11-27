/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:00:14 by vabad-ro          #+#    #+#             */
/*   Updated: 2025/11/27 16:26:30 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	u;

	if (nb < 0)
	{
		u = -nb;
		write(1, "-", 1);
	}
	else
		u = nb;
	if (u >= 10)
		ft_putnbr(u / 10);
	ft_putchar(u % 10 + '0');
}

int	main(void)
{
	ft_putnbr(10000);
	return (0);
}
