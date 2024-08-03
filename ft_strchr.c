/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:34:48 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/02 15:16:11 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (!s[i])
			return (0);
		i++;
	}
	return ((char *)(s + i));
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	printf("%s",ft_strchr("test\0test",0));
	printf("\n%s",strchr("test\0test",0));
}*/
