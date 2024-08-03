/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:54:09 by sennakhl          #+#    #+#             */
/*   Updated: 2023/11/27 14:48:36 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s == 0)
		return (0);
	while (s[i] != (char)(c))
	{
		if (i == 0)
			return (0);
		i--;
	}
	return ((char *)(s + i));
}
/*

#include <stdio.h>
#include <string.h>
int main ()
{
	printf("%s",ft_strrchr("test\0tesaaaaa",'s'));
	printf("\n%s",strrchr("test\0tesaaaaa",'s'));
}*/
