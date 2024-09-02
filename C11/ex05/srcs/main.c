/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:08:13 by yslami            #+#    #+#             */
/*   Updated: 2024/08/14 15:03:03 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	main(int ac, char **av)
{
	int		(*operation)(int, int);
	int		result;
	char	*op;

	if (ac != 4)
		return (0);
	op = av[2];
	if (ft_atoi(av[3]) == 0 && *op == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (ft_atoi(av[3]) == 0 && *op == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	operation = get_op_func(op);
	if (operation == NULL)
		return (0);
	result = operation(ft_atoi(av[1]), ft_atoi(av[3]));
	ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}
/*int	main(int ac, char **av)
{
	int	(*operation)(int, int);
	int	result;

	if (ac == 4)
	{
		operation = get_op_func(av[2]);
		if (operation == NULL || ft_strlen(av[2]) != 1)
		{
			write (1, "0\n", 2);
			return (1);
		}
		result = operation(ft_atoi(av[1]), ft_atoi(av[3]));
		if (!(ft_atoi(av[3]) == 0 && (av[2][0] == '/' || av[2][0] == '%')))
		{
			ft_putnbr(result);
			ft_putstr("\n");
		}
	}
	return (0);
}
*/