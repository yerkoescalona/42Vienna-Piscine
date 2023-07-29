/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:54:54 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/21 10:44:24 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long int	n;
	long long int	inc;
	long long int	div;

	n = nb;
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	div = 5;
	inc = 2;
	while (div * div <= n)
	{
		if (n % div == 0)
		{
			return (0);
		}
		div += inc;
		inc = 6 - inc;
	}
	return (1);
}
