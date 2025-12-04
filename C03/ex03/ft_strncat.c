/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 20:40:12 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/19 20:56:42 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	i = 0;
	while (src[i] && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 4)
		write(1, "ERROR\n", 6);
	else 
		printf("%s", ft_strncat(argv[1], argv[2], atoi(argv[3])));
}
*/
