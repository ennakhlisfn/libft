/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:31:46 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/02 11:55:05 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	long	x;
	char	c;

	if (fd < 0)
		return ;
	nbr = n;
	x = 1;
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	while (nbr / x >= 10)
		x *= 10;
	while (x > 0)
	{
		c = nbr / x + '0';
		write(fd, &c, 1);
		nbr %= x;
		x /= 10;
	}
}
