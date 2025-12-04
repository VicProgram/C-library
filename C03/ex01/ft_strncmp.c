/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:19:05 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/20 12:56:56 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 4)
		write(1, "ERROR\n", 6);
	else
	{
		ft_strncmp(argv[1], argv[2], atoi(argv[3]));
		printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
*/
