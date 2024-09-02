/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:54:43 by yslami            #+#    #+#             */
/*   Updated: 2024/08/15 17:12:03 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *arr, int n)
{
	int	check;
	int	i;

	i = 1;
	check = 1;
	while (i < n)
	{
		if (arr[i - 1] >= arr[i])
			check = 0;
		i++;
	}
	if (check)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(arr[i++] + 48);
		}
		if (arr[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	*arr;
	int	i;

	i = 0;
	while (i < n)
		arr[i++] = 0;
	while (arr[0] <= (10 - n) && n >= 1 && n < 10)
	{
		ft_print(arr, n);
		arr[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (arr[i] > 9)
			{
				arr[i] = 0;
				arr[i - 1]++;
			}
			i--;
		}
	}
}
/*
int main()
{
	ft_print_combn(2);
	return (0);
}
*/