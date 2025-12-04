/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 02:42:41 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/12 15:11:29 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}

/*
int	main(void)
{
	int 	a;
	int	b;

	a = 10;
	b = 3;
	printf("%d, %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d\n", a, b);
}
*/
