/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:54:31 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/11 17:26:11 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

/*
int	main(void)
{	
	int	len;
	len = ft_strlen("Hola mundo");
	printf("%d", len);
}
*/
