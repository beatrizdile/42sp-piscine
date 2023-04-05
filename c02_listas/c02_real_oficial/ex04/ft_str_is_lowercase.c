/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:38:32 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/17 12:25:05 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		test;
	int		i;

	test = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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

	a = "gdggfDD";
	i = ft_str_is_lowercase(a);
	printf("%i", i);
}