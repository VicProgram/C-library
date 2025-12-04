/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:28:37 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/19 20:55:27 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
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
	if (argc != 3)
		write(1, "ERROR\n", 6);
	else
	{
		ft_strcmp(argv[1], argv[2]);
		printf("%d", ft_strcmp(argv[1], argv[2]));
	}
	return (1);
}
*/
