/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:47:19 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/18 13:21:49 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	out;
	int				i;

	if (nb < 0)
		return (0);
	out = 1;
	i = 1;
	while (i < nb + 1)
	{
		out *= i;
		i++;
	}
	return (out);
}
