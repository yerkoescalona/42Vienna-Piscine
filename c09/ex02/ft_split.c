/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:40:06 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/26 12:58:11 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
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
	int	*len_elements;
	int	*result;
	int	len_element;

	len_elements = (int *)malloc(num_elements * 4);
	if (len_elements == NULL)
		return (NULL);
	result = len_elements;
	len_element = 0;
	while (*str != '\0')
	{
		if (ft_is_charset(*str, charset))
		{
			if (len_element > 0)
				*len_elements++ = len_element;
			len_element = 0;
		}
		else
			len_element++;
		str++;
	}
	if (len_element > 0)
		*len_elements++ = len_element;
	return (result);
}

char	*ft_create_substring(char *str, int len)
{
	int		i;
	char	*substring;

	substring = (char *)malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = str[i];
		i++;
	}
	substring[len] = '\0';
	return (substring);
}

char	**ft_split(char *str, char *charset)
{
	int		num_elements;
	int		*len_elements;
	char	**res;
	int		idx;

	num_elements = ft_get_num_elements(str, charset);
	len_elements = ft_get_len_elements(str, charset, num_elements);
	res = (char **)malloc((num_elements + 1) * 8);
	if (res == NULL)
		return (NULL);
	idx = 0;
	while (*str != '\0')
	{
		if (!(ft_is_charset(*str, charset)))
		{
			res[idx] = ft_create_substring(str, len_elements[idx]);
			str += len_elements[idx];
			idx++;
		}
		str++;
	}
	res[idx] = NULL;
	return (res);
}
