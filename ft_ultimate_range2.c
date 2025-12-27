/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viabad-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:21:29 by viabad-r          #+#    #+#             */
/*   Updated: 2025/12/17 14:45:11 by viabad-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	size_t	res;
	int	i;
	//cuidado por que no puede valer negativo
	res = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}

	range = malloc(sizeof (int) * res);

	i = 0;
	while(i < res)
	{
		range[i] = min + i;
		i++;
	}
}

int	main(void)
{
	int	**range;

	ft_ultimate_range(int **range, -10, 23);
	free (range);
	return (0);
}
