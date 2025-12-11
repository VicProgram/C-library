/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 22:20:07 by vabad-ro          #+#    #+#             */
/*   Updated: 2025/11/27 13:41:34 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

{
	int	n;
	int	j;
	int *arr;

	if (min >= max)
		return (NULL);
	else
		n = max - min;

	arr = malloc(n * sizeof(int));
	if (!arr)
		return (0);
	j = 0;
	while (min < max)
	{
		arr[j] = min;
		min++;
		j++;
	}
	return (arr);
}

//pruebas con ayuda

/*int main(void)
{
	int min = 4;
	int max = 9;
	int *arr;
	int n;
	int i;

	arr = ft_range(min, max);
	if (!arr)
		return (0);

	n = max - min;

	i = 0;
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}

	free(arr);
	printf("\n");
	return (0);
}
