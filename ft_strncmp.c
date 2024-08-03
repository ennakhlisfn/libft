/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:28:25 by sennakhl          #+#    #+#             */
/*   Updated: 2023/11/27 14:52:28 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	printf("%d\n",strncmp("abcdefgh", "abcdwxyz", 4));
	printf("%d",ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("\n\n%d\n",strncmp("test\200", "test\0", 6));
	printf("%d",ft_strncmp("test\200", "test\0", 6));
}*/
