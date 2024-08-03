/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:35:39 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/02 11:52:40 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	**ft_free(char **arr, int j)
{
	while (--j >= 0)
		free(arr[j]);
	free(arr);
	return (NULL);
}

static char	**ft_mal_arr(char **arr, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
			k++;
		if (k != 0 && (s[i] == c || s[i + 1] == 0) && (s[i + 1] != c || c == 0))
		{
			arr[j] = (char *)malloc((k + 1) * sizeof(char));
			if (arr[j] == NULL)
				return (ft_free(arr, j));
			k = 0;
			j++;
		}
		i++;
	}
	return (arr);
}

static char	**ft_fill(char **arr, char const *s, char c)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	j = 0;
	if (arr == NULL)
		return (arr);
	while (s[i])
	{
		if (s[i] != c)
			arr[j][k++] = s[i];
		if ((s[i] == c && s[i + 1] != c && k))
		{
			arr[j++][k] = 0;
			k = 0;
		}
		i++;
	}
	if (k)
		arr[j++][k] = 0;
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		k;
	int		q;

	i = 0;
	k = 0;
	q = 1;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && q == 1)
		{
			k++;
			q = 0;
		}
		if (s[i] == c && s[i + 1] != c)
			q = 1;
		i++;
	}
	arr = (char **)malloc((k + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	return (ft_fill(ft_mal_arr(arr, s, c), s, c));
}
/*
#include <stdio.h>

int main()
{
	char **str = ft_split("test test",' ');
	int i = 0;
	
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}*/
