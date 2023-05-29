/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:12:13 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/17 14:29:58 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	s1_count;
	int	i;

	s1_count = 0;
	i = 0;
	while (dest[s1_count] != '\0')
	{
		s1_count++;
	}
	while (src[i] != '\0')
	{
		dest[s1_count] = src[i];
		s1_count++;
		i++;
	}
	dest[s1_count] = '\0';
	return (dest);
}
