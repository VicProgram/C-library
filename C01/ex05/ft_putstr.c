/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 03:00:49 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/11 14:03:51 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str [index])
	{
		index++;
	}
	write(1, str, index);
}

/*
int	main(void)
{
	ft_putstr("Hooooooola mundo");
}
*/
