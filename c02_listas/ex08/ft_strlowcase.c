/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:15:11 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/17 12:29:34 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = *(str + i) + 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "vamos CODAR galera 1232 23232";
	printf("%s", ft_strlowcase(str));
}