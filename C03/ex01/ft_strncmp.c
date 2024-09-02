/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 04:33:50 by yslami            #+#    #+#             */
/*   Updated: 2024/07/27 11:02:21 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				difference;

	difference = 0;
	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		difference = s1[i] - s2[i];
		if (difference != 0)
			return (difference);
		if (s1[i] == s2[i] == 0)
			return (0);
		i++;
	}
	return (0);
}
