/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_op_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:26:20 by yslami            #+#    #+#             */
/*   Updated: 2024/08/14 15:04:19 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	(*get_op_func(char *s))(int a, int b)
{
	int		i;
	t_op	ops[6];

	ops[0].op = "+";
	ops[0].f = op_add;
	ops[1].op = "-";
	ops[1].f = op_sub;
	ops[2].op = "*";
	ops[2].f = op_mul;
	ops[3].op = "/";
	ops[3].f = op_div;
	ops[4].op = "%";
	ops[4].f = op_mod;
	ops[5].op = NULL;
	ops[5].f = 0;
	i = 0;
	while (i < 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	ft_putnbr(0);
	write (1, "\n", 1);
	return (ops[i].f);
}
