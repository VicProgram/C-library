/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vic <vic@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 21:14:27 by vic               #+#    #+#             */
/*   Updated: 2025/12/27 01:44:40 by vic              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	res;
	int	i;

	//cuidado por que no puede valer negativo
	res = max - min;
	if (min >= max)
	{
		range = 0;
		return ('c');
	}

	range = malloc(sizeof (int) * res);

	i = 0;
	while(i < res)
	{
		range[i] += min + i;
		i++;
	}
}
