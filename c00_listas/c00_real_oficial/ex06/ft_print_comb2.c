/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:54:10 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/08 08:41:22 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int i, int j)
{
	ft_putchar('0' + i / 10);
	ft_putchar('0' + i % 10);
	ft_putchar(' ');
	ft_putchar('0' + j / 10);
	ft_putchar('0' + j % 10);
	if (i != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putnbr(i, j);
			j++;
		}	
	i++;
	}
}
