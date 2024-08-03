/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:11:03 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/02 15:28:33 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <string.h>
#include<stdio.h>
int main(void)
{
	int arr[] = { 123, 671, 43 };
	ft_memset(arr + 1, 255, 4);
	ft_memset(arr + 1, 250, 2);
	ft_memset(arr + 1,199,1);
	int i = 0;
	while(i < 3 )
		printf("%d\t" , arr[i++]);
	return (0);
}*/
