/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 09:32:25 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/02 11:51:23 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		substring = (char *)ft_calloc(1, sizeof(char));
		return (substring);
	}
	if (start + len > ft_strlen(s))
		substring = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring == 0)
		return (0);
	while (i < len && s[start + i] && start < ft_strlen(s))
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = 0;
	return (substring);
}
/*
#include <stdio.h>

int main ()
{
	printf("%s\n",ft_substr("",1, 1));
}
*/
