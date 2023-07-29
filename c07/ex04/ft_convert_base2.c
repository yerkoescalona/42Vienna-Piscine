/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:00:21 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/24 16:58:37 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_correct_base(char *base);
int		ft_correct_num(char c, char *base);
int		ft_getindex(char *str, char c);
int		ft_atoi_base(char *str, char *base);
int		ft_count_digits(int nbr, int base_length);
char	*ft_putnbr_base(int nbr, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_count_digits(int nbr, int base_length)
{
	long long	n;
	int			c;

	n = nbr;
	c = 0;
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		c++;
		n = -n;
	}
	while (n != 0)
	{
		c++;
		n = n / base_length;
	}
	return (c);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		base_length;
	int		digits;
	char	*res;
	char	*result;

	base_length = ft_strlen(base);
	digits = ft_count_digits(nbr, base_length);
	res = (char *)malloc(digits + 1);
	if (res == NULL)
		return (NULL);
	result = res;
	if (nbr < 0)
	{
		*res++ = '-';
		digits--;
		nbr = -nbr;
	}
	res = res + digits;
	*res-- = '\0';
	while (digits--)
	{
		*res-- = base[nbr % base_length];
		nbr /= base_length;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_value;
	char	*result;

	if (!(ft_correct_base(base_from)) || !(ft_correct_base(base_to)))
		return (NULL);
	nbr_value = ft_atoi_base(nbr, base_from);
	result = ft_putnbr_base(nbr_value, base_to);
	return (result);
}
