/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:37:04 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/19 20:54:34 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	dest_len = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i) < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
int	main(void)
{
	char dest[] = "Hola";
	unsigned int x; 
	char str[] = "Hola";
	x = ft_strlcat(dest, str, 2);
	ft_strlcat(dest, str, 2);
	printf("%s\n", dest);
	printf("%d", x);
}
*/
