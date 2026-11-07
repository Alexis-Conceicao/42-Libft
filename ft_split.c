/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 12:38:44 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 16:38:43 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**alloc_word(char const *str, char c)
{
	char	**nbr_words;
	int		i;
	int		words;

	if (!str)
		return (NULL);
	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			words++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	nbr_words = malloc(sizeof(char *) * (words + 1));
	return (nbr_words);
}

static int	count_letter(char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i])
	{
		i++;
		j++;
	}
	return (j);
}

static void	free_all(char **liberty)
{
	int	i;

	i = 0;
	if (!liberty)
		return ;
	while (liberty[i])
		free(liberty[i++]);
	free(liberty);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		house;

	i = 0;
	house = 0;
	res = alloc_word(s, c);
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		res[house] = malloc(sizeof(char) * (count_letter(s, c, i) + 1));
		if (!res[house])
			return (free_all(res), NULL);
		ft_memcpy(res[house], s + i, count_letter(s, c, i));
		res[house++][count_letter(s, c, i)] = '\0';
		i += count_letter(s, c, i);
	}
	res[house] = NULL;
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	char *s = "  teste  palavra  again  fim.";
	char **res;
	res = ft_split(s, ' ');
	for (int i = 0; res[i]; i++)
	{
		printf("word %d: \'%s\'\n", i + 1, res[i]);
	}
}*/