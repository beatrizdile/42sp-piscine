/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:52:20 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/17 12:00:39 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = *(str + i) - 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "saygsyag 4343njsan GSGYnasjn";
	printf("%s", ft_strupcase(str));
}