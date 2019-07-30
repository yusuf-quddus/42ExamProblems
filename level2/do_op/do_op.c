/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquddus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 05:25:13 by yquddus           #+#    #+#             */
/*   Updated: 2019/07/30 05:56:24 by yquddus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d\n", atoi(argv[1]) + atoi(argv[3]));
		else if (argv[2][0] == '-')
			printf("%d\n", atoi(argv[1]) - atoi(argv[3]));
		else if (argv[2][0] == '*')
			printf("%d\n", atoi(argv[1]) * atoi(argv[3]));
		else if (argv[2][0] == '/')
			printf("%d\n", atoi(argv[1]) / atoi(argv[3]));
		else if (argv[2][0] == '%')
			printf("%d\n", atoi(argv[1]) % atoi(argv[3]));
//		fflush(stdout);
//		write(1, "\n", 1);
	}
	return (0);
}
