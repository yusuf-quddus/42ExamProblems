/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 17:52:03 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/30 19:28:35 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int flag;
	int r;

	i = 0;
	flag = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
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
	return ((int)r * flag);
}

int		is_prime(int n)
{
	int i;

	i = 2;
	while (i <= n/2)
	{
		if ((n % i == 0))
			return (0);
		else
			i++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	else if (n < 10)
	{
		c = n + '0';
		ft_putchar(c);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int main(int argc, char **argv)
{
		int number;
		int sum;

		sum = 0;
	if (argc == 2)
	{
 		number = ft_atoi(argv[1]);
		while (number >= 2)
		{
			if(is_prime(number))
				sum += number;
			number--;
		}		
	}
	ft_putnbr(sum);
	ft_putchar('\n');
}
