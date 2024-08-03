/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:10:45 by sennakhl          #+#    #+#             */
/*   Updated: 2023/11/24 15:44:48 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
	int	c = '\0';

	printf("%d\n%d",ft_isalnum(c),isalnum(c));
}*/
