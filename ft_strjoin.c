/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:13:52 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/02 11:51:48 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l;
	char	*newstr;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	l = ft_strlen(s1);
	newstr = (char *)malloc((l + ft_strlen(s2) + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[i - l])
	{
		newstr[i] = s2[i - l];
		i++;
	}
	newstr[i] = 0;
	return (newstr);
}
/*
#include <stdio.h>

int main ()
{
	printf("%s\n",ft_strjoin("test",NULL));
}*/
