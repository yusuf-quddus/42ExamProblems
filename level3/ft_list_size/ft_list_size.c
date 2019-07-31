/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 20:40:43 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/30 21:51:54 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list *pointer;
	int i;

	i = 0;
	while (pointer)
	{
		pointer = pointer->next;
		i++;
	}
	return (i);
}
