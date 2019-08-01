/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hiddenp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 23:11:10 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/31 23:46:07 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		string_located(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i])
	{
		if (str1[i] != str2[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i;
		char flag;

		i = 0;
		flag = '0';
		while(argv[2][i])
		{
			if (string_located(argv[1], argv[2]++))
			{
				flag = '1';
				ft_putchar(flag);
			}
		}
		if (flag != '1')
		{
			flag = '0';
			ft_putchar(flag);
		}
	}
	return (0);
}
