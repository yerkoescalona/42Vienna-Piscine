/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:53:46 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/20 13:51:55 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	out;
	int	i;

	if (power < 0)
		return (0);
	out = 1;
	i = 0;
	while (i < power)
	{
		out *= nb;
		i++;
	}
	return (out);
}
