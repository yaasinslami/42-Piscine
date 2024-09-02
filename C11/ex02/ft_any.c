/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:07:07 by yslami            #+#    #+#             */
/*   Updated: 2024/08/13 23:10:36 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
/*
int f(char *str)
{
	if (*str == 'z')
		return (1);
	return (0);
}

int main()
{
	char *arr[5] = {"A", "B", "A", "Z", NULL};

	printf("%d\n", ft_any(arr, &f));
}
*/