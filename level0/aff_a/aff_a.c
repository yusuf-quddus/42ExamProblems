/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:52:45 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/29 16:07:10 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else 
	{
		while (argv[1][i] != '\0' && argv[1][i] != 'a')
		{
			i++;
		}	
		if (argv[1][i] == 'a')
		{
			ft_putchar(argv[1][i]);
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('a');
			ft_putchar('\n');
		}
	}
	return (0);
}
