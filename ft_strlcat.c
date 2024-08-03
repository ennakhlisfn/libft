/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:52:07 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/02 11:35:33 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	a = i;
	while (i < dstsize - 1 && src[i - a])
	{
		dst[i] = src[i - a];
		i++;
	}
	dst[i] = 0;
	if (dstsize < a)
		a = dstsize;
	return (a + ft_strlen(src));
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
//	char dest[15];
//	char det[15];
//	dest[10] = 'a';
    printf("%zu\n",ft_strlcat("NULL", NULL, 0));
    printf("%zu\n", strlcat("NULL", NULL, 0));
	return (0);
}*/
