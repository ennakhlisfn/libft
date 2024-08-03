/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:54:48 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/02 15:26:42 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{	
			if (needle[j] && haystack[i + j])
				j++;
			else
				break ;
		}
		if (needle[j] == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s\n",ft_strnstr("","",256));
	printf("%s\n",strnstr("","",256));
}*/
