/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:08:59 by vabad-ro          #+#    #+#             */
/*   Updated: 2025/11/27 14:05:28 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 3;
	while (i < nb)
	{
		if (nb % 2 == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_is_prime(66666));
	return (0);
}*/	
