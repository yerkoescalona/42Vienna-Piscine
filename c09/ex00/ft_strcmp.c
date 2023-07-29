/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <yescalon@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:36:11 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/27 16:21:17 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;
	int	n;

	diff = 0;
	i = 0;
	n = ft_strlen(s1);
	while (i <= n)
	{
		diff = s1[i] - s2[i];
		if (s1[i] == '\0' || diff != 0)
		{
			return (diff);
		}
		i++;
	}
	return (diff);
}
