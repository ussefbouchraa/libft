/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 08:37:49 by ybouchra          #+#    #+#             */
/*   Updated: 2023/02/20 11:56:37 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	*ft_free(int index, char **arr)
{
	while (--index)
	{
		free(arr[index]);
	}
	free (arr);
	return (NULL);
}

static int	nbr_of_word(char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if ((str[i] != c) && (str[i + 1] == c || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static	int	len_word(char *str, char c, int i)
{
	int	j;

	j = 0;
	while (str[i] != c && str[i])
	{
		j++;
		i++;
	}
	return (j);
}

char	**ft_split(const char *str, char c)
{
	int		i;
	int		j;
	int		nbrw;
	char	**news;

	i = 0;
	j = 0;
	if (! str)
		return (NULL);
		nbrw = nbr_of_word((char *)str, c);
		news = (char **)malloc((nbrw + 1) * sizeof(char *));
	if (!news)
		return (NULL);
	while (j < nbrw && str[i])
	{
		while (str[i] == c && str[i])
				i++;
			news[j] = ft_substr((char *)str, i, len_word((char *)str, c, i));
		if (!news[j])
			return (ft_free(j, news));
			j++;
			i = i + len_word((char *)str, c, i);
	}
		news[j] = NULL;
	return (news);
}
