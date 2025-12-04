/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:09:51 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/16 21:05:33 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str [0] - 32;
	i = 1;
	while (str[i])
	{
		a = str[i - 1];
		if ((str[i] >= 97 && str[i] <= 122) && (!(a >= 97 && a <= 122)
				&& !(a >= 65 && a <= 90) && !(a >= 48 && a <= 57)))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "salut, coMMent tu vas ? 42mots quaRante-deux";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
*/
