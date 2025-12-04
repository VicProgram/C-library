/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 20:40:12 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/19 20:56:08 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	i = 0;
	while (src[i])
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
	if (argc != 3)
		write(1, "ERROR\n", 6);
	else 
		printf("%s", ft_strncat(argv[1], argv[2]));
}
*/
