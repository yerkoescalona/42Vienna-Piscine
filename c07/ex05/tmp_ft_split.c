/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:00:34 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/24 16:36:52 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_get_num_elements(char *str, char *charset)
{
	int	num;
	int	in_element;

	num = 0;
	in_element = 0;
	while (*str != '\0')
	{
		if (ft_is_charset(*str, charset))
			in_element = 0;
		else if (!in_element)
		{
			in_element = 1;
			num++;
		}
		str++;
	}
	return (num);
}

int	*ft_get_len_elements(char *str, char *charset, int num_elements)
{
	int	idx;
	int	*len_elements;
	int	in_element;
	int	len_element;

	len_elements = (int *)malloc(num_elements * 4);
	if (len_elements == NULL)
		return (NULL);
	in_element = 0;
	idx = 0;
	len_element = 0;
	while (*str != '\0')
	{
		if (ft_is_charset(*str, charset))
		{
			if (in_element == 1)
				len_elements[idx++] = len_element;
			in_element = 0;
		}
		else
		{
			if (!in_element)
				in_element = 1;
			len_element++;
		}
		str++;
	}
	if (in_element == 1)
		len_elements[idx++] = len_element;
	return (len_elements);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		num_elements;
	char	**res;
	int		in_element;
	int		*len_elements;
	int		idx;

	num_elements = ft_get_num_elements(str, charset);
	len_elements = ft_get_len_elements(str, charset, num_elements);
	res = (char **)malloc((num_elements + 1) * 8);
	if (res == NULL)
		return (NULL);
	idx = 0;
	in_element = 0;
	while (*str != '\0')
	{
		if (ft_is_charset(*str, charset))
			in_element = 0;
		else
		{
			if (!in_element && *str != '\0')
			{
				*res = (char *)malloc(len_elements[idx] + 1);
				if (*res == NULL)
					return (NULL);
				ft_strncpy(res[idx], str, len_elements[idx]);
				res[idx][len_elements[idx]] = '\0';
				idx++;
			}
		}
		str++;
	}
	*res = NULL;
	return (res);
}
