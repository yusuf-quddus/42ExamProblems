/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 19:19:35 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/31 22:07:11 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int i;
	int size;
	int	*range;

	i = 0;
	if (end > start)
		size = end - start + 1;
	else if (start > end)
		size = start - end + 1;
	else
		size = 1;
	range = malloc(sizeof(int) * size);
	if (end == start)
		range[0] = start;
	else if (start > end)
	{
		while (start >=  end)
		{
			range[i] = start;
			i++;
			start--;
		}
	}
	else
	{
		while (end >= start)
		{	
			range[i] = end;
			i++;
			end--;
		}	
	}
	range[i] = '\0';
	return (range);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i;
		int *array;

		i = 0;
		array = ft_range(atoi(argv[1]),atoi(argv[2]));
		while (array[i])
		{
			printf("%d",array[i]);
			i++;
		}
	}
	return (0);
}
