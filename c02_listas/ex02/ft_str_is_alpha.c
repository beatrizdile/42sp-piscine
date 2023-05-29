/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 07:39:30 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/17 12:22:50 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		test;
	int		i;

	test = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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

	a = "fhush2452";
	i = ft_str_is_alpha(a);
	printf("%i", i);
}