/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:48:38 by yslami            #+#    #+#             */
/*   Updated: 2024/08/14 14:39:07 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	op_add(int a, int b)
{
	return (a + b);
}

int	op_sub(int a, int b)
{
	return (a - b);
}

int	op_mul(int a, int b)
{
	return (a * b);
}

int	op_div(int a, int b)
{
	return (a / b);
}

int	op_mod(int a, int b)
{
	return (a % b);
}
