/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yescalon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:45:45 by yescalon          #+#    #+#             */
/*   Updated: 2023/07/20 14:41:12 by yescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	j;

	if (argc > 0)
	{
		j = 0;
		while (argv[0][j] != '\0')
		{
			ft_putchar(argv[0][j]);
			j++;
		}
	}
	ft_putchar('\n');
}
