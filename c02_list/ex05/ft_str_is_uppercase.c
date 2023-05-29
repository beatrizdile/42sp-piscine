/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:52:32 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/17 12:26:02 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		test;
	int		i;

	test = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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

	a = "ASDAa";
	i = ft_str_is_uppercase(a);
	printf("%i", i);
}