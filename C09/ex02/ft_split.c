/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:42:57 by yslami            #+#    #+#             */
/*   Updated: 2024/08/12 15:11:40 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !check_sep(str[i], charset))
			i++;
	}
	return (count);
}

int	word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !check_sep(str[len], charset))
		len++;
	return (len);
}

char	*ft_strdup(char *str, char *charset)
{
	char	*word;
	int		w_len;
	int		i;

	w_len = word_len(str, charset);
	word = (char *)malloc((sizeof(char) * w_len) + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < w_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_word(str, charset) + 1));
	if (!strings)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && check_sep(*str, charset))
			str++;
		if (*str)
		{
			strings[i] = ft_strdup(str, charset);
			i++;
		}
		while (*str && !check_sep(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
/*
int main(int ac, char **av)
{
	char	**strings = NULL;
	char	*charset = " ,";
	int		i;

	if (ac == 2)
	{
		strings = ft_split(av[1], charset);
		if (strings == NULL)
			return (1);
		i = 0;
		while(i < count_word(av[1], charset))
		{
			ft_putstr(strings[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	free(strings);
	return (0);
}
*/