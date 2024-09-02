/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 22:46:15 by yslami            #+#    #+#             */
/*   Updated: 2024/08/08 20:54:52 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	sep_len(char *sep)
{
	int	len;

	len = 0;
	while (sep[len])
		len++;
	return (len);
}

int	total_len(int size, char **strs, int sep_len)
{
	int	i;
	int	j;
	int	total_len;

	i = 0;
	total_len = 0;
	while (strs[i] && i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			total_len++;
			j++;
		}
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*full_allocate(int total_len)
{
	char	*res;

	res = (char *)malloc(total_len + 1);
	if (res == NULL)
		return (NULL);
	return (res);
}

void	concatenate_strings(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	k;
	int	sep_length;

	i = 0;
	k = 0;
	sep_length = sep_len(sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			res[k++] = strs[i][j++];
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				res[k++] = sep[j++];
		}
		i++;
	}
	res[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_length;
	int		t_len;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	sep_length = sep_len(sep);
	t_len = total_len(size, strs, sep_length);
	result = full_allocate(t_len);
	if (result == NULL)
		return (NULL);
	concatenate_strings(size, strs, sep, result);
	return (result);
}
