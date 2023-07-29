/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <yescalon@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:44:29 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/13 16:10:40 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(int num)
{
	char	hex_digits[16];
	char	*hex_values;
	int		i;

	hex_values = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		hex_digits[i] = hex_values[i];
		i++;
	}
	ft_putchar('\\');
	ft_putchar(hex_digits[num / 16]);
	ft_putchar(hex_digits[num % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_puthex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
