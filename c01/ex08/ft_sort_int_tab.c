/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <yescalon@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:44:29 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/08 16:09:19 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int i, int j)
{
	int	tmp;

	tmp = *(tab + i);
	*(tab + i) = *(tab + j);
	*(tab + j) = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	jmin;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		jmin = i;
		j = i + 1;
		while (j < size)
		{
			if (*(tab + j) < *(tab + jmin))
			{
				jmin = j;
			}
			j++;
		}
		if (jmin != i)
		{
			swap(tab, i, jmin);
		}
		i++;
	}
}
