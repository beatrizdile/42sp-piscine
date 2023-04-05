/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:02:52 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/11 09:07:51 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	everything(int nb)
{
	char	num;

	num = '0';
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb > 9)
	{	
		everything(nb / 10);
		num = ('0' + nb % 10);
		ft_putchar(num);
	}
	else if (nb >= 0 && nb <= 9)
	{
		num = ('0' + nb % 10);
		ft_putchar(num);
	}
	else
	{
		ft_putchar('-');
		everything(nb * -1);
	}
}

void	ft_putnbr(int nb)
{	
	everything(nb);
}
