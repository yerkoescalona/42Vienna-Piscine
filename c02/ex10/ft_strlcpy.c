/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <yescalon@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:44:29 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/13 16:51:32 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_length;
	unsigned int	i;

	src_length = ft_strlen(src);
	if (src_length >= size)
	{
		if (size > 0)
		{
			i = 0;
			while (i < size)
			{
				dest[i] = src[i];
				i++;
			}
			dest[size - 1] = '\0';
		}
	}
	else
	{
		i = 0;
		while (i < src_length + 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (src_length);
}
