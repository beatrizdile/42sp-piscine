/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:13:10 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/19 16:31:23 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
	{
		return (0);
	}
	i = 0;
	result = 1;
	if (power == 0)
	{
		return (result);
	}
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
