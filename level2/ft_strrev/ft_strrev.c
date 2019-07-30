/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:32:27 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/30 16:50:43 by yquddus          ###   ########.fr       */
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
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i = 0;
	int j = ft_strlen(str) - 1;
	char temp;
	
	while (i != j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

int main()
{
	int i;

	i = 0;
	char str[] = "abcde";
	ft_strrev(str);
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
