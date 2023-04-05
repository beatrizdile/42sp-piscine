/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:26:05 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/17 12:31:54 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	conditions(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;

	i = -1;
	while (str[++i] != '\0')
	{
		j = i - 1;
		if (i == 0)
		{
			conditions(str, i);
			continue ;
		}
		if ((str[j] < 'a' || str[j] > 'z') && (str[j] < 'A' || str[j] > 'Z'))
		{
			if ((str[j] < '0' || str[j] > '9'))
			{	
				conditions(str, i);
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
	}
	return (str);
}

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}