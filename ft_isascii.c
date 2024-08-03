/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:57:14 by sennakhl          #+#    #+#             */
/*   Updated: 2023/11/24 15:51:26 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
	int	c = 0;

	printf("%d\n%d",ft_isascii(c),isascii(c));
}*/
