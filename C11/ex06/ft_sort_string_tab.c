/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:15:52 by yslami            #+#    #+#             */
/*   Updated: 2024/08/14 11:12:38 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
		i++;
	while (i > 0)
	{
		j = 0;
		while (j < i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i--;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int		i;
	char	*str[] = {"Hello", "World", "Test", "Ananas", NULL};

	ft_sort_string_tab(str);
	i = 0;
	while(str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
}
*/