/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 04:39:24 by yslami            #+#    #+#             */
/*   Updated: 2024/07/31 17:34:04 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hex(int s)
{
	char	*hexad;

	hexad = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexad[(unsigned char)s / 16]);
	ft_putchar(hexad[(unsigned char)s % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127
			|| (unsigned char)str[i] > 127)
			ft_dec_to_hex((unsigned char)str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
