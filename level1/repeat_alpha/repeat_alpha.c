/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 17:26:58 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/29 17:44:43 by yquddus          ###   ########.fr       */
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
	int j;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			j = 0;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				while (j <= argv[1][i] - 'a')
				{
					ft_putchar(argv[1][i]);
					j++;
				}
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				while (j <= argv[1][i] - 'A')
				{
					ft_putchar(argv[1][i]);
					j++;
				}
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	return (0);
}
