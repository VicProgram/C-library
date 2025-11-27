/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:28:41 by vabad-ro          #+#    #+#             */
/*   Updated: 2025/11/27 16:53:37 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *strdup(char *str)
{
	char 	*p;
	int	i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	p = malloc(i * sizeof(int));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i]  = '\0';
	return (p);
}
