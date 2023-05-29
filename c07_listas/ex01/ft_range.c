/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:25:57 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/23 14:47:19 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	positive(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

void	insert(int min, int max, int size, int *tab)
{
	int	i;

	i = 0;
	if (min < max)
	{
		while (i < size)
		{
			*(tab + i) = min + i;
			i++;
		}
	}
}

int	*ft_range(int min, int max)
{
	int	size;
	int	*tab;

	size = positive(min - max);
	tab = (int *)malloc(size * sizeof(int));
	if (!tab || (min > max) || (min == max))
		return (NULL);
	if (size == 1)
		tab[0] = min;
	else
		insert(min, max, size, tab);
	return (tab);
}
