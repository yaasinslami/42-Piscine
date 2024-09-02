/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:09:38 by yslami            #+#    #+#             */
/*   Updated: 2024/08/08 18:49:37 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	char	*origin;
	int		s_len;

	s_len = 0;
	if (src == NULL)
		return (NULL);
	while (src[s_len])
		s_len++;
	ptr = (char *)malloc((sizeof(char) * s_len) + 1);
	if (ptr == NULL)
		return (NULL);
	origin = ptr;
	while (*src)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (origin);
}
