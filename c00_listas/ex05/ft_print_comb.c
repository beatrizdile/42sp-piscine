/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:56:11 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/11 08:56:39 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inside(char p, char s, char t)
{
	write(1, &p, 1);
	write(1, &s, 1);
	write(1, &t, 1);
	if (p != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	p;
	char	s;
	char	t;

	p = '0';
	while (p <= '7')
	{	
		s = p + 1;
		while (s <= '8')
		{	
			t = s + 1;
			while (t <= '9')
			{	
				inside(p, s, t);
				t++;
			}
		s++;
		}
	p++;
	}
}
