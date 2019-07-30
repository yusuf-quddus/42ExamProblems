/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 19:56:35 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/29 20:13:47 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	int r;
	int flag;


	i = 0;
	flag = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		flag = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i])
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (flag * (int)r);
}
