/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:01:23 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/17 12:27:23 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		test;
	int		i;

	test = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
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

	a = "\0";
	i = ft_str_is_printable(a);
	printf("%i", i);
}