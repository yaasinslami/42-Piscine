/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:58:09 by yslami            #+#    #+#             */
/*   Updated: 2024/07/28 20:34:26 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
		index++;
	return (index);
}

int	ft_is_found(int offset, char *src, char *to_find, int to_find_len)
{
	int	x;
	int	found;

	x = 0;
	found = 1;
	while (x < to_find_len)
	{
		if (src[offset + x] != to_find[x])
			found = 0;
		x++;
	}
	return (found);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	found;
	int	to_find_len;

	found = 0;
	i = 0;
	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		found = ft_is_found(i, str, to_find, to_find_len);
		if (found == 1)
			return (str + i);
		i++;
	}
	return (0);
}
