/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:21:58 by sennakhl          #+#    #+#             */
/*   Updated: 2023/11/26 10:17:31 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src < dst)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		return (ft_memcpy(dst, src, len));
	}
	return (dst);
}
/*
#include<stdio.h>
#include <string.h>

int main ()
{
	char s1[]="test1337";
	char s2[] ="test1337";

//	printf("%s",ft_memmove("",s1,0));
	printf("\n%s",memmove("",s2,0));
}*/
