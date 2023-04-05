/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:16:39 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/11 13:42:54 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(int *tab, int n)
{
	int	i;
	int	to_print;

	i = 1;
	to_print = 1;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
			to_print = 0;
		i++;
	}
	if (to_print == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i++] + '0');
		}
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
	i = n - 1;
	while (tab[0] <= (10 - n))
	{
		display(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}
