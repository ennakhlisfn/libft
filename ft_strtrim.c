/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:44:00 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/02 11:52:17 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}

static char	*ft_trim(char const *s1, int i, int a, int l)
{
	char	*trim;

	trim = (char *)malloc((ft_strlen(s1) - l + 1) * sizeof(char));
	if (trim == NULL)
		return (NULL);
	l = 0;
	while (i <= a)
	{
		trim[l] = s1[i];
		i++;
		l++;
	}
	trim[l] = 0;
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		l;
	int		a;

	i = 0;
	l = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i])
	{
		if (ft_set(s1[i], set))
			break ;
		i++;
		l++;
	}
	a = ft_strlen(s1) - 1;
	while (a > i)
	{
		if (ft_set(s1[a], set))
			break ;
		a--;
		l++;
	}
	return (ft_trim(s1, i, a, l));
}
/*
#include <stdio.h>
int main ()
{

    printf("%s\n",ft_strtrim("test", NULL));
}*/
