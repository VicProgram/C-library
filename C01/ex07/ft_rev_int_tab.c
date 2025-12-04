/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:00:56 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/20 14:54:06 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < )
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*
int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
*/
