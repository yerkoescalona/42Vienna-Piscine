/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:59:41 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/25 18:12:03 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	get_length(int size, char **strs, char *sep)
{
	int	len;
	int	s;

	len = 0;
	s = 0;
	while (s < size)
	{
		len += ft_strlen(strs[s]);
		if (s != size - 1)
			len += ft_strlen(sep);
		s++;
	}
	return (len);
}

char	*case_size_zero(void)
{
	char	*dest;

	dest = (char *)malloc(1);
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		s;
	char	*dest;
	int		len;

	if (size == 0)
		case_size_zero();
	len = get_length(size, strs, sep);
	dest = (char *)malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	s = 0;
	while (s < size)
	{
		ft_strcpy(dest + i, strs[s]);
		i += ft_strlen(strs[s]);
		if (s != size - 1)
		{
			ft_strcpy(dest + i, sep);
			i += ft_strlen(sep);
		}
		s++;
	}
	return (dest);
}
