/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:28:12 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/17 12:24:09 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		test;
	int		i;

	test = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
			test = 0;
		i++;
	}
	return (test);
}

#include <stdio.h>

int	main(void)
{
	char	*a;
	int		i;

	a = "42";
	i = ft_str_is_numeric(a);
	printf("%i", i);
}