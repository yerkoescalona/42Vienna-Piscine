/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <yescalon@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:39:16 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/17 13:12:50 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				src_length;
	unsigned int	dest_length;
	int				max;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	if (dest_length <= size)
	{
		max = size - dest_length - 1;
		i = 0;
		while (i < max && src[i] != '\0')
		{
			dest[dest_length + i] = src[i];
			i++;
		}
		dest[dest_length + i] = '\0';
	}
	else
	{
		return (size + src_length);
	}
	return (dest_length + src_length);
}
