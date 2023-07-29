/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:00:21 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/25 12:03:20 by yescalon         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

int	ft_correct_base(char *base)
{
	int	i;
	int	j;
	int	base_length;

	base_length = ft_strlen(base);
	if (base_length < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == '+' || base[j] == '-')
				return (0);
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_correct_num(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_getindex(char *str, char c)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;
	int	num;
	int	base_length;

	base_length = ft_strlen(base);
	i = 0;
	sign = 1;
	while (str[i] >= 7 && str[i] <= 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	num = 0;
	while (ft_correct_num(str[i], base))
	{
		num = (num * base_length) + ft_getindex(base, str[i]);
		i++;
	}
	return (sign * num);
}
