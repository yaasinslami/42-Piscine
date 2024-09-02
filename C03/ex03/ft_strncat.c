/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:30:13 by yslami            #+#    #+#             */
/*   Updated: 2024/07/27 11:50:18 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*p;

	p = dest;
	while (*p)
		p++;
	i = 0;
	while (*src && i < nb)
	{
		*p = *src;
		p++;
		src++;
		i++;
	}
	*p = '\0';
	return (dest);
}
