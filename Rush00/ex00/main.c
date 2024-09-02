/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:54:38 by mbenchah          #+#    #+#             */
/*   Updated: 2024/07/28 19:52:46 by mbenchah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_char_int(char *c)
{
	int	i;
	int	num;

	num = 0;
	i = 0;
	while (c[i])
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			num = (num * 10) + c[i] - '0';
			if (!(c[i + 1] <= '9' && c[i + 1] >= '0'))
				break ;
		}
		i++;
	}
	return (num);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		rush(ft_char_int(av[1]), ft_char_int(av[2]));
		return (0);
	}
}
