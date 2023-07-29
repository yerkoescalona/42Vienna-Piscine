/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <yescalon@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:12:46 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/06 13:29:02 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	digit;

	digit = '1';
	while (digit <= '9')
	{
		ft_putchar(digit);
		digit++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
