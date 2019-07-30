/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:50:17 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/29 16:57:51 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
	{
		while(argv[argc-1][i] != '\0')
		{
			ft_putchar(argv[argc-1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
