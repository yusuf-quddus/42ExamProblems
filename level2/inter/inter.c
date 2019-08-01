/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 21:26:45 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/31 18:14:03 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		compare(char *str, char c, int index)
{
	index--;
	while (index >= 0)
	{
		if (str[index] == c)
		{
			return (1);
		}
		index--;
	}
	return (0);
}

void	inter(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	while (str1[i])
	{
		if (compare(str1, str1[i], i) == 0)
		{
			j = 0;
			while (str2[j])
			{
				if (str2[j] == str1[i])
				{
					ft_putchar(str1[i]);
					break;
				}
				j++;
			}
		}
		i++;
	}
}

int 	main(int argc, char **argv)
{
	if (argc == 3)
	{
			inter(argv[1], argv[2]);
	}
	return (0);
}
