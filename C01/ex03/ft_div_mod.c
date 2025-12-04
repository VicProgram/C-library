/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 02:15:22 by lcalvarr          #+#    #+#             */
/*   Updated: 2025/11/12 15:09:35 by lcalvarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	 main (void)
{
	int div;
	int mod;

	div = 1;
	mod = 2;
	
	printf("%d, %d\n", div, mod);
	ft_div_mod(10, 3, &div, &mod);
	printf("%d, %d\n", div, mod);
}
*/
