/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <yescalon@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:44:29 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/13 15:45:10 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && capitalize)
		{
			str[i] = str[i] - 32;
			capitalize = 0;
		}
		if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
		{
			capitalize = 1;
		}
		else
		{
			capitalize = 0;
		}
		i++;
	}
	return (str);
}
