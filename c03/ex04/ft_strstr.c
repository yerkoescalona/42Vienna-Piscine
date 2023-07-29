/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <yescalon@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:39:16 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/13 20:50:03 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

int	ft_match(char *str, char *to_find, int i, int j)
{
	if (str[i + j] == to_find[j])
	{
		return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	str_length;
	int	to_find_length;
	int	j;

	str_length = ft_strlen(str);
	to_find_length = ft_strlen(to_find);
	i = 0;
	while (i <= (str_length - to_find_length))
	{
		j = 0;
		while (j < to_find_length && ft_match(str, to_find, i, j))
		{
			j++;
		}
		if (j == to_find_length)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
