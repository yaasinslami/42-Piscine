/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 01:28:23 by yslami            #+#    #+#             */
/*   Updated: 2024/08/08 20:58:40 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_valide_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *base)
{
	int	b_len;

	b_len = 0;
	while (base[b_len])
		b_len++;
	return (b_len);
}

int	nbr_length(long res, int len_base)
{
	int	len;

	len = 0;
	if (res < 0)
	{
		res *= -1;
		len++;
	}
	while (res > 0)
	{
		res /= len_base;
		len++;
	}
	return (len);
}

char	*ft_zero(char *base_to)
{
	char	*str;

	str = (char *)malloc(2 * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = base_to[0];
	str[1] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		decim_num;
	int		nbr_len;

	decim_num = ft_atoi_base(nbr, base_from);
	if (!(is_valide_base(base_from)) || !(is_valide_base(base_to)))
		return (NULL);
	if (decim_num == 0)
		return (ft_zero(base_to));
	nbr_len = nbr_length(decim_num, ft_strlen(base_to));
	res = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (res == NULL)
		return (NULL);
	if (decim_num < 0)
	{
		res[0] = '-';
		decim_num *= -1;
	}
	res[nbr_len] = '\0';
	while (decim_num > 0)
	{
		res[--nbr_len] = base_to[decim_num % ft_strlen(base_to)];
		decim_num /= ft_strlen(base_to);
	}
	return (res);
}
