/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:51:38 by yslami            #+#    #+#             */
/*   Updated: 2024/08/14 15:05:17 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALC_H
# define CALC_H

# include <stdlib.h>
# include <unistd.h>

typedef struct op
{
	char	*op;
	int		(*f)(int, int);
}	t_op;

int		op_add(int a, int b);
int		op_sub(int a, int b);
int		op_mul(int a, int b);
int		op_div(int a, int b);
int		op_mod(int a, int b);
int		(*get_op_func(char *s))(int, int);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif
