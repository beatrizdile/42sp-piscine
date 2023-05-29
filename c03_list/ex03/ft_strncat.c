/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:13:08 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/17 16:23:28 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				s1_count;
	unsigned int	i;

	s1_count = 0;
	i = 0;
	while (dest[s1_count] != '\0')
	{
		s1_count++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[s1_count] = src[i];
		s1_count++;
		i++;
	}
	dest[s1_count] = '\0';
	return (dest);
}
