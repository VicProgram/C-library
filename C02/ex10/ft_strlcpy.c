/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:58:02 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/17 19:30:30 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (src[j])
	{
		j++;
	}
	if (size == 0)
		return (j);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

/*
int	main(void)
{
	char dest[10];
	unsigned int j; 
	char str[] = "Reproduce el comportamiento";
	j = ft_strlcpy(dest, str, 10);
	ft_strlcpy(dest, str, 10);
	printf("%s\n", dest);
	printf("%d", j);
}
*/
