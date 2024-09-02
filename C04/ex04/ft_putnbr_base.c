/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:20:13 by yslami            #+#    #+#             */
/*   Updated: 2024/07/30 05:07:12 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	twice_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_nbr(int num, int b_value, char *base)
{
	long	n;

	n = num;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= b_value)
	{
		print_nbr((n / b_value), b_value, base);
	}
	ft_putchar(base[n % b_value]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;

	base_value = 0;
	while (base[base_value])
	{
		if (base[base_value] == '-' || base[base_value] == '+')
			return ;
		base_value++;
	}
	if (base_value < 2)
	{
		return ;
	}
	if (twice_check(base))
	{
		return ;
	}
	print_nbr (nbr, base_value, base);
}
