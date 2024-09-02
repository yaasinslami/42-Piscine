/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:51:58 by yslami            #+#    #+#             */
/*   Updated: 2024/08/01 11:16:29 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32
			|| base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

char	*str_whitespaces_sign(char *str, int *sign)
{
	*sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}

int	get_index(char ch, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (ch == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	calcule_result(char *str, char *base, int b_len)
{
	int	result;
	int	index;

	result = 0;
	while (*str)
	{
		index = get_index(*str, base);
		if (index == -1)
			break ;
		result = (result * b_len) + index;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	b_len;
	int	sign;

	if (!is_valid_base(base))
		return (0);
	b_len = 0;
	while (base[b_len])
		b_len++;
	str = str_whitespaces_sign(str, &sign);
	result = calcule_result(str, base, b_len);
	return (sign * result);
}
