/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:33:08 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/02 15:24:24 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	lenstr(long n)
{
	int	l;

	l = 0;
	if (n <= 0)
	{
		l++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

static char	*fillstr(char *str, int l, long nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		str[i++] = '-';
		l++;
	}
	if (nbr == 0)
		str[i++] = '0';
	while (nbr > 0)
	{
		str[l - 1 - i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	str[i] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	int		l;
	char	*str;
	long	nbr;

	nbr = n;
	l = lenstr(nbr);
	str = (char *)malloc((l + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (fillstr(str, l, nbr));
}
/*
#include <stdio.h>
#include <stddef.h>

int main ()
{
	printf("%s",ft_itoa(2147483647));
}*/
