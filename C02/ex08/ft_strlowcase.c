/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:47:55 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/16 18:05:31 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str [i] + 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "H0lA mUnd0";
	printf("%s", ft_strlowcase(str));
	return (0);
}
*/
