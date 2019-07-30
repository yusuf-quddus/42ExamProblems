/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 20:27:12 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/29 21:15:48 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int 	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;

		i = ft_strlen(argv[1]) - 1;
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && (argv[1][i] != '\0'))
			i--;
		while ((argv[1][i] != ' ' && argv[1][i] != '\t'))
			i--;
		i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
